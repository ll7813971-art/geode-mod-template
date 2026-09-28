# 📱 Guía de Instalación en Móvil - Artartir Mobile Mod

## Paso 1: Descargar el ZIP

### Desde móvil:
1. Ve a: https://github.com/ll7813971-art/geode-mod-template
2. Toca **Code** (botón verde)
3. Elige **Download ZIP**
4. Se descargará en Descargas
5. Abre con ZArchive para extraer

### Desde PC:
1. Descarga el ZIP
2. Extrae en una carpeta
3. Compila el proyecto

## Paso 2: Compilar (SOLO EN PC)

Este paso NO se puede hacer en móvil.

### Requisitos en PC:
- Geode SDK instalado
- Android NDK
- CMake
- Compilador C++

### Compilar:
```bash
cd geode-mod-template-main
geode build
```

### Resultado:
Generará: `build/ArtartirMobileMod.geode`

## Paso 3: Transferir al Móvil

### Opción A: USB
1. Conecta PC y móvil
2. Copia `ArtartirMobileMod.geode` a Descargas del móvil

### Opción B: Telegram/Drive
1. Sube el `.geode` a la nube
2. Descárgalo en el móvil

## Paso 4: Instalar en Geode (EN EL MÓVIL)

1. Abre **Geode Mod Loader**
2. Toca **+** o el botón de instalar
3. Elige **Install mod from file**
4. Ve a **Descargas**
5. Selecciona `ArtartirMobileMod.geode`
6. Toca **Instalar**
7. Espera a que termine

## Paso 5: Verificar

1. Cierra Geometry Dash completamente
2. Abre Geometry Dash nuevamente
3. Ve a **Configuración** ⚙️
4. Busca **Mods** o **Geode**
5. Deberías ver "Artartir Mobile Mod"
6. Asegúrate que esté **habilitado** (✅)

## ✅ ¡Listo!

El mod ya está instalado y funcionando en tu Geometry Dash.

---

## Ruta de Instalación Manual (Avanzado)

Si prefieres instalarlo manualmente sin Geode:

1. Abre gestor de archivos
2. Ve a:
   ```
   Android > media > com.geode.launcher > game > geode > mods
   ```
3. Pega `ArtartirMobileMod.geode` ahí
4. Reinicia Geometry Dash

---

## 🐛 Solución de Problemas

### "El archivo no se descarga"
- Intenta desde otra red WiFi
- Usa un navegador diferente
- Descargalo desde una PC

### "ZArchive no puede extraer"
- Intenta con otra app: RAR, 7-Zip
- Descarga el ZIP nuevamente

### "El mod no aparece en Geode"
- Verifica que sea un archivo `.geode` (no `.zip`)
- Reinicia completamente Geode
- Reinstala el mod

### "Geometry Dash se cierra"
- El mod puede ser incompatible
- Desinstala y prueba otro
- Revisa los logs de Geode

---

**Usuario:** Artartir  
**Mod:** Artartir Mobile Mod v1.0.0  
**Plataforma:** Android + Geode
