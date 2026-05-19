# SW-AyLP-APE-04: Clases, Objetos y Métodos 🚀

<div align="center">
  <img src="https://img.shields.io/badge/Universidad-T%C4%99cnica%20de%20Ambato-blue?style=for-the-badge&labelColor=800000" alt="UTA">
  <img src="https://img.shields.io/badge/Carrera-Software-black?style=for-the-badge&logo=computercraft&logoColor=white" alt="Carrera">
  <img src="https://img.shields.io/badge/Nivel-Primero%20--%20B-brightgreen?style=for-the-badge" alt="Nivel">
</div>

---

## 📌 Información General
* **Estudiante:** Guanotoa Escobar Karla Leonela
* **Asignatura:** Algoritmos y Lógica de Programación
* **Docente:** Ing. Rubén Caiza
* **Ciclo Académico:** Enero 2026 - Julio 2026
* **Institución:** Universidad Técnica de Ambato (FISEI)

---

## 💻 Tecnologías Utilizadas

Para resolver y cumplir con los requerimientos de esta práctica autónoma y de experimentación (APE), se implementó el sistema utilizando programación modular y orientada a objetos en dos lenguajes fundamentales:

<div align="center">
  <img src="https://img.shields.io/badge/C++-00599C?style=for-the-badge&logo=c%2B%2B&logoColor=white" alt="C++ Icon">
  &nbsp;&nbsp;&nbsp;&nbsp;
  <img src="https://img.shields.io/badge/Java-ED8B00?style=for-the-badge&logo=openjdk&logoColor=white" alt="Java Icon">
</div>

---

## 📝 Descripción del Problema
El proyecto consiste en desarrollar un **Sistema Básico de Control de Estudiantes y Calificaciones**, aplicando de forma estricta los principios fundamentales de la **Programación Orientada a Objetos (POO)** como el encapsulamiento (atributos privados y métodos de acceso), modularidad y constructores.

### Características y Funcionalidades:
* **Entidad Central:** Clase `Estudiante` con gestión controlada de datos (Cédula, Nombre, Apellido, Notas, Promedio y Estado).
* **Colección de Objetos:** Registro fijo y procesamiento secuencial para un grupo mínimo de **5 estudiantes**.
* **Validaciones Robustas:** Control exhaustivo por teclado mediante estructuras interativas para asegurar que las notas ingresadas estén estrictamente en el rango de `[0.00 - 10.00]`.
* **Cálculos Automáticos:** El promedio de las 3 notas y la condición final (`Aprobado` $\ge 7.00$ o `Reprobado` $< 7.00$) se procesan internamente al instanciar o modificar los datos del objeto.
* **Métricas Estadísticas:** Presentación detallada del conteo total de alumnos aprobados y reprobados dentro del grupo.

---

## 🗂️ Estructura del Repositorio

El repositorio se encuentra organizado de forma limpia:

```text
APE04-Clases-Objetos-Metodos/
│
├── Cpp/
│   └── ESTUDIANTES.cpp             # Lógica del programa y Clase Estudiante en C++
│
├── Java/
│   ├── Main.java            # Clase de control principal con métodos modulares
│   └── Estudiante.java      # Definición de la clase plantilla (molde POO)
│
├── capturas/
│   ├── ejecucion_cpp.png    # Evidencia de pruebas en consola de C++
│   ├── ejecucion_java.png   # Evidencia de pruebas en consola de Java
│   └── commits_github.png   # Captura del historial del repositorio
│
└── README.md                # Documentación del proyecto (Este archivo)
