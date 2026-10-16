# Configuración automática de Codespaces para C++

## Instalación en el repositorio principal
1. Descomprimí este ZIP. Subí **el contenido**, no la carpeta contenedora, a la raíz del repositorio `estructura_de_datos`.
2. Hacé commit y push de `.devcontainer`, `.vscode`, `scripts`, `.gitignore` y este archivo.
3. Para Codespaces nuevos, al crearlos se instala el entorno C++ (`g++`), la extensión C/C++ de Microsoft y se activa el guardado automático local.
4. Para Codespaces existentes, ejecutá desde la paleta de comandos: `Codespaces: Rebuild Container` (guardá/confirmá primero tus cambios para no perder trabajo).

## Publicación automática a GitHub
- Se inicia al arrancar Codespaces. Cada ~15 segundos comprueba si hay cambios ya guardados y, si GitHub no tiene actualizaciones ajenas, hace `git add`, `commit` y `push` **a la rama actual del repositorio de ese alumno**.
- No escribe en el repositorio original de otro compañero ni hace `force push`.
- Debe existir un `origin` con permisos de escritura (por ejemplo, el fork del alumno) y autenticación Git funcional.
- Los cambios frecuentes generan muchos commits. Por eso **evitá poner datos privados** dentro del repositorio: todo archivo nuevo que no esté ignorado podría subirse.
- Si GitHub tiene cambios nuevos, el guardado local sigue funcionando pero la publicación se detiene hasta que resuelvas la sincronización con Git.
- Mirá los problemas en `.git/autosync.log`, o ejecutá la tarea `GitHub: Publicar ahora`.
- Para detener temporalmente el envío: `Terminal -> Run Task -> GitHub: Pausar sincronizacion automatica`. Para reanudar, la tarea correspondiente.
- Para detener permanentemente la sincronización automática, quitá `postStartCommand` de `.devcontainer/devcontainer.json` y detené el proceso ya iniciado.

## Compilar y ejecutar
Abrí un archivo `.cpp` y presioná `Ctrl + Shift + B`. Usá la terminal interactiva para responder las entradas del programa.

## Compartir con compañeros
Cada uno hace `Fork` del repositorio en GitHub y después crea su propio Codespace desde su fork.
**Sincronizar nuevas clases:** GitHub -> `Sync fork` -> `Update branch`; luego `git pull` en Codespaces. La sincronización automática de guardados NO reemplaza este paso.

## Aviso
Esta configuración prepara y arranca una automatización que hace commits frecuentes. No garantiza subir cada pulsación de tecla o cada guardado en forma instantánea y no publica si hay conflictos o problemas de permisos o conexión.
