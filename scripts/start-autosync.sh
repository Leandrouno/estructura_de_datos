#!/usr/bin/env bash
set -e
cd "$(dirname "$0")/.."
if [ ! -d .git ]; then exit 0; fi
pidfile=.git/autosync.pid
if [ -f "$pidfile" ] && kill -0 "$(cat "$pidfile")" 2>/dev/null; then exit 0; fi
nohup python3 scripts/autosync.py > .git/autosync.log 2>&1 < /dev/null &
echo "$!" > "$pidfile"
echo "Autosync iniciado. Registro: .git/autosync.log"
