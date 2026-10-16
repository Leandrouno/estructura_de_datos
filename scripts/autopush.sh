
#!/bin/bash

cd "$(dirname "$0")/.." || exit 1

echo "AutoSync GitHub iniciado"

while true; do
    sleep 15

    RAMA=$(git branch --show-current)

    if [ -z "$RAMA" ]; then
        echo "No se pudo identificar la rama"
        continue
    fi

    if [ -n "$(git status --porcelain)" ]; then
        echo "Detectados cambios..."

        git add -A

        if ! git diff --cached --quiet; then
            git commit -m "Actualización automática $(date '+%d/%m/%Y %H:%M:%S')" || continue
        fi

        if git push origin "$RAMA"; then
            echo "Cambios subidos a GitHub correctamente"
        else
            echo "ERROR: No se pudieron subir los cambios"
        fi
    else
        # Reintentar enviar commits pendientes
        if [ "$(git rev-list --count "origin/$RAMA..HEAD" 2>/dev/null)" != "0" ]; then
            git push origin "$RAMA"
        fi
    fi
done
