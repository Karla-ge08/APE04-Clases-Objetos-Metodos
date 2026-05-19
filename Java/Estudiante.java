/*
 * Click nbfs://nbhost/SystemFileSystem/Templates/Licenses/license-default.txt to change this license
 * Click nbfs://nbhost/SystemFileSystem/Templates/Classes/Class.java to edit this template
 */

/**
 *
 * @author USUARIO
 */
    public class Estudiante {
    // Atributos privados
    private String cedula;
    private String nombre;
    private String apellido;
    private double nota1;
    private double nota2;
    private double nota3;
    private double promedio;
    private String estado;

    // Constructor
    public Estudiante(String cedula, String nombre, String apellido, double nota1, double nota2, double nota3) {
        this.cedula = cedula;
        this.nombre = nombre;
        this.apellido = apellido;
        this.nota1 = nota1;
        this.nota2 = nota2;
        this.nota3 = nota3;
        calcularPromedio();
        determinarEstado();
    }

    // Métodos de cálculo internos
    public void calcularPromedio() {
        double res = (this.nota1 + this.nota2 + this.nota3) / 3.0;
        this.promedio = Math.round(res * 100.0) / 100.0;
    }

    public void determinarEstado() {
        if (this.promedio >= 7.0) {
            this.estado = "Aprobado";
        } else {
            this.estado = "Reprobado";
        }
    }

    // Métodos Getters y Setters
    public String getCedula() { return cedula; }
    public String getNombre() { return nombre; }
    public String getApellido() { return apellido; }
    public double getNota1() { return nota1; }
    public double getNota2() { return nota2; }
    public double getNota3() { return nota3; }
    public double getPromedio() { return promedio; }
    public String getEstado() { return estado; }

    public void setNota1(double nota1) { this.nota1 = nota1; calcularPromedio(); determinarEstado(); }
    public void setNota2(double nota2) { this.nota2 = nota2; calcularPromedio(); determinarEstado(); }
    public void setNota3(double nota3) { this.nota3 = nota3; calcularPromedio(); determinarEstado(); }

    // Método para imprimir la fila de este estudiante
    public void mostrarInformacion() {
        System.out.printf("%-12s | %-12s | %-12s | %-5.2f | %-5.2f | %-5.2f | %-8.2f | %-10s%n",
                cedula, nombre, apellido, nota1, nota2, nota3, promedio, estado);
    }
}
