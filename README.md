# ArachnidCrawler

Crawler web básico escrito en c++ que descarga el HTML de una página y sirve como base para construir un sistema de exploración de enlaces.

## Estado del Proyecto

Actualmente el proyecto:
- Realiza peticiones HTTP
- Descarga el contenido HTML de una URL
- Maneja redirecciones
- Guarda el contenido en memoria
| Proximamente: guardado de HTML en un archivo .txt, extracción de enlaces, sistema de cola, crawling por profundidad.

## Tecnologías usadas

- C++
- libcurl
- g++ (MinGW en Windows)

## Dependencias

- libcurl (cliente HTTP)
- Compilador compatible con C++ (g++ recomendado)

## Uso

Ejecuta el programa:

./crawler.exe

Luego ingresa una URL válida:

https://example.com

El programa descargará el HTML y lo imprimirá en consola.

## Estructura del Proyecto

´´´
ArachnidCrawler/
│
├── src/
|   |-main.cpp
│
├── output/     # (futuro) archivos con resultados del crawler
│
└── README.md
´´´
## Limitaciones actuales

- No parsea HTML
- No extrae enlaces
- No evita duplicados
- No implementa profundidad de crawling

## Notas

Este proyecto está enfocado en el aprendizaje práctico.
Se prioriza entender el funcionamiento interno antes de optimizar o escalar.
