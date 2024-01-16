#include <stdio.h>

//Estructura alumno
struct alumno
{
    int matricula;
    char nombre[50];
    char direccion[50];
    char carrera[50];
    float promedio;
};
// Prototipo de funciones
void ingresarDatos(struct alumno *estudiante);
void mostrarDatos(const struct alumno *estudiante);

int main()
{
    int n;

    // Solicita al usuario el número de alumnos
    printf("Ingrese el número de alumnos: ");
    scanf("%d", &n);

    // Declara un arreglo de estructuras para almacenar los datos de los alumnos
    struct alumno estudiantes[n];

    for (int i = 0; i < n; ++i)
    {
        printf("\nIngrese datos para el estudiante %d:\n", i + 1);
        ingresarDatos(&estudiantes[i]);
    }

    // Muestra los datos de todos los alumnos
    printf("\nDatos ingresados de los alumnos:\n");
    for (int i = 0; i < n; ++i)
    {
        printf("\nDatos del estudiante %d:\n", i + 1);
        mostrarDatos(&estudiantes[i]);
    }

    return 0;
}
