/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author USUARIO
 */
import java.util.Scanner;

public class Main {
    public static void main(String[] args) {
        // REQUERIMIENTO: Declaración del arreglo de objetos tipo Estudiante (Tamaño: 5)
        Estudiante[] estudiantes = new Estudiante[5];
        
        System.out.println("=======================================================");
        System.out.println("   SISTEMA DE GESTIÓN DE CALIFICACIONES - UTA SOFTWARE ");
        System.out.println("=======================================================");

        // Invocación a los métodos modulares según tu diseño de Word
        ingresarEstudiantes(estudiantes);
        mostrarReporte(estudiantes);
    }

    // Método modular para realizar la lectura de datos por teclado y llenar el arreglo
    public static void ingresarEstudiantes(Estudiante[] estudiantes) {
        Scanner teclado = new Scanner(System.in);

        for (int i = 0; i < estudiantes.length; i++) {
            System.out.println("\n--- Registro Estudiante #" + (i + 1) + " ---");
            
            System.out.print("Cédula: ");
            String cedula = teclado.next();
            System.out.print("Nombre: ");
            String nombre = teclado.next();
            System.out.print("Apellido: ");
            String apellido = teclado.next();

            double n1, n2, n3;

            // Validación estricta para la Nota 1 (0 a 10)
            do {
                System.out.print("Nota 1 (0-10): ");
                n1 = teclado.nextDouble();
                if (n1 < 0 || n1 > 10) {
                    System.out.println("-> Error: Calificación fuera de rango.");
                }
            } while (n1 < 0 || n1 > 10);

            // Validación estricta para la Nota 2 (0 a 10)
            do {
                System.out.print("Nota 2 (0-10): ");
                n2 = teclado.nextDouble();
                if (n2 < 0 || n2 > 10) {
                    System.out.println("-> Error: Calificación fuera de rango.");
                }
            } while (n2 < 0 || n2 > 10);

            // Validación estricta para la Nota 3 (0 a 10)
            do {
                System.out.print("Nota 3 (0-10): ");
                n3 = teclado.nextDouble();
                if (n3 < 0 || n3 > 10) {
                    System.out.println("-> Error: Calificación fuera de rango.");
                }
            } while (n3 < 0 || n3 > 10);

            // Instanciación directa del objeto guardado en la posición correspondiente del arreglo
            estudiantes[i] = new Estudiante(cedula, nombre, apellido, n1, n2, n3);
        }
    }

    // Método modular para procesar las estadísticas e imprimir la tabla general de resultados
    public static void mostrarReporte(Estudiante[] estudiantes) {
        int aprobados = 0;
        int reprobados = 0;

        System.out.println("\n========================================================================================");
        System.out.println("                               REPORTE GENERAL DE NOTAS                                 ");
        System.out.println("========================================================================================");
        System.out.printf("%-12s | %-12s | %-12s | %-5s | %-5s | %-5s | %-8s | %-10s%n",
                "Cédula", "Nombre", "Apellido", "N1", "N2", "N3", "Promedio", "Estado");
        System.out.println("----------------------------------------------------------------------------------------");

        // Recorrido estructurado del arreglo de objetos
        for (Estudiante est : estudiantes) {
            if (est != null) {
                est.mostrarInformacion(); // Delegación de salida de datos a la clase Estudiante

                // Contador estadístico basado en el estado calculado
                if (est.getEstado().equals("Aprobado")) {
                    aprobados++;
                } else {
                    reprobados++;
                }
            }
        }

        System.out.println("----------------------------------------------------------------------------------------");
        System.out.println("ESTADÍSTICAS DEL GRUPO:");
        System.out.println("  >> Estudiantes Aprobados  : " + aprobados);
        System.out.println("  >> Estudiantes Reprobados : " + reprobados);
        System.out.println("========================================================================================");
    }
}