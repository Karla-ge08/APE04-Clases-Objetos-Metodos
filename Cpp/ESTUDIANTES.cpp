#include <iostream>
#include <vector>
#include <string>
#include <iomanip> // Biblioteca necesaria para dar formato tabular a la salida (setw)

using namespace std;

// =========================================================================================
// REQUERIMIENTO: Definición de la Clase Estudiante
// =========================================================================================
class Estudiante {
private:
    // REQUERIMIENTO: Atributos privados (Principio de Encapsulamiento)
    // El acceso directo a estas variables está restringido fuera de la clase.
    string cedula;
    string nombre;
    string apellido;
    double nota1;
    double nota2;
    double nota3;
    double promedio;
    string estado;

public:
    // REQUERIMIENTO: Constructor de la clase
    // Se encarga de inicializar el objeto con los datos proporcionados y gatillar los cálculos automáticos.
    Estudiante(string _cedula, string _nombre, string _apellido, double _n1, double _n2, double _n3) {
        cedula = _cedula;
        nombre = _nombre;
        apellido = _apellido;
        nota1 = _n1;
        nota2 = _n2;
        nota3 = _n3;
        calcularPromedio();   // Proceso automático: Calcula el promedio al instanciar el objeto
        determinarEstado();   // Proceso automático: Evalúa si aprueba o reprueba al instanciar
    }

    // =====================================================================================
    // PROCESOS / MÉTODOS DE COMPORTAMIENTO INTERNO
    // =====================================================================================

    // Método para calcular el promedio aritmético de las tres calificaciones
    void calcularPromedio() {
        promedio = (nota1 + nota2 + nota3) / 3.0;
    }

    // Método para determinar si el estudiante aprueba o reprueba (Condición: Promedio >= 7.00)
    void determinarEstado() {
        if (promedio >= 7.00) {
            estado = "Aprobado";
        } else {
            estado = "Reprobado";
        }
    }

    // =====================================================================================
    // REQUERIMIENTO: Métodos de Acceso GET y SET (Encapsulamiento Estricto)
    // =====================================================================================

    // Métodos Get (Permiten leer los valores de los atributos privados)
    string getCedula() { return cedula; }
    string getNombre() { return nombre; }
    string getApellido() { return apellido; }
    double getNota1() { return nota1; }
    double getNota2() { return nota2; }
    double getNota3() { return nota3; }
    double getPromedio() { return promedio; }
    string getEstado() { return estado; }

    // Métodos Set (Permiten modificar los atributos privados de forma controlada)
    void setCedula(string _cedula) { cedula = _cedula; }
    void setNombre(string _nombre) { nombre = _nombre; }
    void setApellido(string _apellido) { apellido = _apellido; }

    // Nota Importante: Si se modifica una nota mediante un Set, se deben recalcular el promedio y el estado de forma automática.
    void setNota1(double _n1) { nota1 = _n1; calcularPromedio(); determinarEstado(); }
    void setNota2(double _n2) { nota2 = _n2; calcularPromedio(); determinarEstado(); }
    void setNota3(double _n3) { nota3 = _n3; calcularPromedio(); determinarEstado(); }

    // =====================================================================================
    // REQUERIMIENTO: Método para Mostrar la Información del Estudiante
    // =====================================================================================
    // Imprime de forma alineada y formateada los datos individuales del objeto.
    void mostrarInformacion() {
        cout << left << setw(14) << cedula
             << setw(15) << nombre
             << setw(15) << apellido
             << right << setw(7) << fixed << setprecision(2) << nota1
             << setw(7) << nota2
             << setw(7) << nota3
             << setw(11) << promedio
             << "   " << left << setw(12) << estado << endl;
    }
};

// =========================================================================================
// FUNCIÓN PRINCIPAL / CONTROLADOR DEL SISTEMA (main)
// =========================================================================================
int main() {
    // REQUERIMIENTO: Registrar mínimo 5 estudiantes
    // Usamos la estructura 'vector' que actúa como un arreglo dinámico de objetos tipo Estudiante.
    vector<Estudiante> listaEstudiantes;
    int totalEstudiantes = 5;

    // Variables contadoras acumulativas para las estadísticas finales
    int aprobados = 0;
    int reprobados = 0;

    cout << "==========================================================================" << endl;
    cout << "===          SISTEMA DE CONTROL DE ESTUDIANTES Y CALIFICACIONES        ===" << endl;
    cout << "===           ASIGNATURA: ALGORITMOS Y LÓGICA DE PROGRAMACION          ===" << endl;
    cout << "==========================================================================" << endl;

    // PROCESO 1: LECTURA Y VALIDACIÓN DE DATOS (CICLO ITERATIVO)
    for (int i = 0; i < totalEstudiantes; i++) {
        string ced, nom, ape;
        double n1, n2, n3;

        cout << "\n[ Registro del Estudiante # " << (i + 1) << " de " << totalEstudiantes << " ]" << endl;
        cout << "Ingrese Cedula: ";
        cin >> ced;
        cout << "Ingrese Nombre: ";
        cin >> nom;
        cout << "Ingrese Apellido: ";
        cin >> ape;

        // REQUERIMIENTO: Validar que las notas estén comprendidas estrictamente entre 0 y 10
        // Validación de la Nota 1
        do {
            cout << "Ingrese Nota 1 (0-10): ";
            cin >> n1;
            if (n1 < 0 || n1 > 10) {
                cout << ">> Error: La nota es invalida. Debe estar en el rango de 0 a 10." << endl;
            }
        } while (n1 < 0 || n1 > 10);

        // Validación de la Nota 2
        do {
            cout << "Ingrese Nota 2 (0-10): ";
            cin >> n2;
            if (n2 < 0 || n2 > 10) {
                cout << ">> Error: La nota es invalida. Debe estar en el rango de 0 a 10." << endl;
            }
        } while (n2 < 0 || n2 > 10);

        // Validación de la Nota 3
        do {
            cout << "Ingrese Nota 3 (0-10): ";
            cin >> n3;
            if (n3 < 0 || n3 > 10) {
                cout << ">> Error: La nota es invalida. Debe estar en el rango de 0 a 10." << endl;
            }
        } while (n3 < 0 || n3 > 10);

        // INSTANCIACIÓN: Creación del objeto e inserción en la colección dinámica
        // Aquí se llama al Constructor de la clase Estudiante y se guarda en el vector.
        listaEstudiantes.push_back(Estudiante(ced, nom, ape, n1, n2, n3));
    }

    // PROCESO 2: GENERACIÓN DE REPORTES Y LISTADOS TABULARES
    cout << "\n==========================================================================================" << endl;
    cout << "                               LISTADO GENERAL DE ESTUDIANTES                             " << endl;
    cout << "==========================================================================================" << endl;

    // Impresión de las cabeceras fijas de la tabla con alineación controlada
    cout << left << setw(14) << "Cedula" << setw(15) << "Nombre" << setw(15) << "Apellido"
         << right << setw(7) << "Nota 1" << setw(7) << "Nota 2" << setw(7) << "Nota 3" << setw(11) << "Promedio"
         << "   " << left << setw(12) << "Estado" << endl;
    cout << "------------------------------------------------------------------------------------------" << endl;

    // Recorrido secuencial de la lista de objetos utilizando un bucle 'for' basado en rango
    for (size_t i = 0; i < listaEstudiantes.size(); i++) {
        // Invocación al método encargado de la visualización de la información del objeto
        listaEstudiantes[i].mostrarInformacion();

        // PROCESO 3: CALCULAR ACUMULADORES ESTADÍSTICOS
        // Evaluamos el estado interno del objeto usando su método GET para el conteo final
        if (listaEstudiantes[i].getEstado() == "Aprobado") {
            aprobados++;
        } else {
            reprobados++;
        }
    }

    // PROCESO 4: PRESENTACIÓN DE ESTADÍSTICAS FINALES
    cout << "------------------------------------------------------------------------------------------" << endl;
    cout << "REPORTE ESTADÍSTICO FINAL:" << endl;
    cout << "  >> Total de Estudiantes Aprobados  : " << aprobados << endl;
    cout << "  >> Total de Estudiantes Reprobados : " << reprobados << endl;
    cout << "==========================================================================================" << endl;

    return 0; // Finalización exitosa del programa principal
}
