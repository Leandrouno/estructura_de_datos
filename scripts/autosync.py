#!/usr/bin/env python3
"""Guardado automático de cambios de Codespaces al fork GitHub.
No hace force-push, pull automático, reset ni borra historial.
"""
import argparse
import os
import subprocess
import time
from pathlib import Path

ROOT = Path(__file__).resolve().parent.parent
DELAY = 15  # segundos entre comprobaciones


def git(*args, check=False):
    return subprocess.run(["git", *args], cwd=ROOT, capture_output=True,
                          text=True, check=check)


def publish():
    if (ROOT / ".git/autosync.disabled").exists():
        return "Pausado"
    branch = git("branch", "--show-current").stdout.strip()
    if not branch:
        return "Sin rama activa"
    remote = git("remote", "get-url", "origin")
    if remote.returncode != 0:
        return "No hay remoto origin"
    # Nunca sobrescribir trabajo ajeno: publicar solo si GitHub no avanzó.
    fetch = git("fetch", "origin", branch)
    if fetch.returncode != 0:
        return "Sin conexión al remoto: " + fetch.stderr.strip()[-200:]
    remote_ref = git("rev-parse", f"refs/remotes/origin/{branch}")
    if remote_ref.returncode != 0:
        return "Rama remota no disponible"
    base = git("merge-base", "HEAD", f"origin/{branch}")
    if base.returncode != 0 or base.stdout.strip() != remote_ref.stdout.strip():
        return "GitHub tiene cambios nuevos; sincronizá manualmente antes de publicar"
    if not git("status", "--porcelain").stdout.strip():
        return "Sin cambios"
    add = git("add", "-A")
    if add.returncode != 0:
        return "No se pudo agregar cambios: " + add.stderr.strip()[-200:]
    staged = git("diff", "--cached", "--quiet")
    if staged.returncode == 0:
        return "Sin cambios para confirmar"
    commit = git("-c", "user.name=Codespaces AutoSync", "-c", "user.email=codespaces-autosync@users.noreply.github.com", "commit", "-m", "Guardado automatico desde Codespaces")
    if commit.returncode != 0:
        return "Commit falló: " + commit.stderr.strip()[-250:]
    push = git("push", "origin", branch)
    if push.returncode != 0:
        return "Commit local guardado; push falló: " + push.stderr.strip()[-250:]
    return "Publicado en GitHub: " + branch


def main():
    parser = argparse.ArgumentParser()
    parser.add_argument("--once", action="store_true")
    args = parser.parse_args()
    if args.once:
        print(publish(), flush=True)
        return
    previous = None
    while True:
        try:
            status = publish()
            if status not in {"Sin cambios", "Pausado"} and status != previous:
                print(time.strftime("%Y-%m-%d %H:%M:%S"), status, flush=True)
            previous = status
        except Exception as exc:
            print("Error inesperado:", exc, flush=True)
        time.sleep(DELAY)


if __name__ == "__main__":
    main()
