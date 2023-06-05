#include <stdio.h>

#define ALUMNOS 23
#define PROGRESOS 3

// Función para obtener el promedio de calificaciones de un alumno
float calcularPromedioAlumno(float calificaciones[]) {
    float suma = 0;
    for (int i = 0; i < PROGRESOS; i++) {
        suma += calificaciones[i];
    }
    return suma / PROGRESOS;
}