# 💙 Componente en C++ | Práctica APE 04

Este directorio alberga la solución técnica desarrollada en **C++** para el sistema de control académico de calificaciones, implementando un enfoque de objetos bajo una arquitectura modular limpia.

---

## 🗂️ Ficheros de la Carpeta

| Archivo | Tipo de Componente | Descripción Principal |
| :--- | :--- | :--- |
| 📄 `main.cpp` | Código Fuente | Archivo consolidado que integra la estructura lógica de la clase `Estudiante`, los constructores, validaciones de flujo y funciones de reporte. |

---

## 🎯 Pilares Técnicos Aplicados

* **Estructura de Objetos:** Definición de una plantilla mediante la palabra clave `class` que abstrae las propiedades de un alumno real hacia el entorno digital.
* **Control de Formato Integrado (`<iomanip>`):** Uso de manipuladores de flujo como `setw()` y `left` con `cout` para asegurar que el reporte por pantalla se dibuje como una cuadrícula perfecta.
* **Constructor de Reserva:** Implementación de un constructor por defecto nulo, indispensable en C++ para reservar el bloque de memoria de manera estática al declarar `Estudiante estudiantes[5]`.

---

## 🛠️ Guía de Compilación y Uso

Para compilar y correr el sistema usando el compilador oficial de GNU (`g++`), abre una terminal en esta ruta y ejecuta:

### 1. Fase de Compilación
```bash
g++ main.cpp -o sistema_notas
