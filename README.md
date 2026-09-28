# Artartir Mobile Mod

Mod personalizado para **Geometry Dash + Geode** en Android.

## 📥 Descargar

1. Ve a: https://github.com/ll7813971-art/geode-mod-template
2. Toca el botón verde **Code**
3. Selecciona **Download ZIP**
4. Se descargará: `geode-mod-template-main.zip`

## 📱 Instalar en Móvil

Este ZIP contiene el código fuente. Para instalarlo en Geometry Dash:

1. Descarga el ZIP en una **PC**
2. Extrae la carpeta
3. Compila con: `geode build`
4. Se generará un archivo `ArtartirMobileMod.geode`
5. Copia ese archivo al móvil en:
   ```
   Android > media > com.geode.launcher > game > geode > mods
   ```
6. Abre Geometry Dash
7. El mod aparecerá en la lista de Geode ✅

## 📋 Archivos del Proyecto

- `geode.json` - Configuración del mod
- `CMakeLists.txt` - Script de compilación
- `src/Main.cpp` - Código fuente
- `.gitignore` - Archivos ignorados

## ⚙️ Configuración

Edita `geode.json` para:
- Cambiar el nombre
- Agregar más opciones
- Modificar la descripción

## 🔧 Compilación

En una PC con Geode SDK:

```bash
geode build
```

O con CMake:

```bash
cmake -B build
cmake --build build --config Release
```

## 📍 Instalación Manual en Android

Una vez compilado el `.geode`:

1. Abre tu gestor de archivos (Files, ZArchive, etc.)
2. Ve a: `Android/media/com.geode.launcher/game/geode/mods/`
3. Pega el archivo `ArtartirMobileMod.geode`
4. Reinicia Geometry Dash

## ✅ Verificar Instalación

- Abre Geometry Dash
- Ve a Configuración > Mods
- Verifica que "Artartir Mobile Mod" aparezca en la lista
- Habilitalo si está desactivado
- ¡Disfruta! 🎮

---

**Creado para: Artartir**
**Versión: 1.0.0**
**Compatible con: Geode 3.3.0+**
