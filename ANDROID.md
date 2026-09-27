# Compilar Artartir Mobile Mod para Android

## Requisitos

- Una computadora Windows, macOS o Linux.
- Geode CLI/SDK instalado y configurado.
- Android NDK compatible con tu instalación de Geode.
- Geometry Dash y Geode instalados en el teléfono.

## Compilación recomendada

Desde la carpeta del proyecto, usa el flujo oficial de tu versión del Geode SDK. Normalmente:

```bash
geode build
```

Si tu instalación requiere CMake manualmente:

```bash
cmake -B build -S .
cmake --build build --config Release
```

El resultado será un archivo `.geode` dentro de `build/` o de la carpeta de artefactos indicada por tu versión del SDK.

## Transferir al móvil

```bash
adb push build/ArtartirMobileMod.geode /sdcard/Download/
```

También puedes copiarlo manualmente a `Download` y abrirlo desde el gestor de archivos con Geode. Las rutas y opciones pueden cambiar según la versión de Geode y Android.

## Importante

- Compila para la misma arquitectura y versión de Geometry Dash que usa tu instalación.
- No instales mods de fuentes desconocidas.
- Si el juego falla, desactiva o elimina el `.geode` desde Geode.
- Este repositorio no incluye una cuenta de Geometry Dash ni credenciales.
