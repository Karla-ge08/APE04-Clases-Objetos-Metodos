# ☕ Componente en Java - APE 04

Este directorio contiene la solución al sistema de gestión de calificaciones desarrollado bajo el paradigma de **Programación Orientada a Objetos (POO)** en Java.

## 🗂️ Archivos Incluidos

* **`Estudiante.java`**: Clase plantilla (molde POO) que encapsula los atributos privados (`cedula`, `nombre`, `apellido`, `notas`, `promedio`, `estado`) y define los métodos constructores, modificadores (`setters`), analizadores (`getters`), así como el cálculo automático del promedio y condición final.
* **`Main.java`**: Clase de control principal. Contiene el método de ejecución modularizado mediante las funciones estáticas `ingresarEstudiantes()` y `mostrarReporte()`.

## 🛠️ Compilación y Ejecución

Para correr este programa desde una consola de comandos con el JDK instalado, ejecuta:

```bash
# 1. Compilar ambos archivos simultáneamente
javac Estudiante.java Main.java

# 2. Ejecutar la clase controladora principal
java Main
