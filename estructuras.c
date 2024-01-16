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

void ingresarDatos(struct alumno *estudiante)
{
    fflush(stdin); // Limpia el buffer de entrada

    // Ingresar datos usando gets(lee una cadena de caracteres desde la entrada estandar)
    printf("Matrícula: ");
    scanf("%d", &estudiante->matricula);
    fflush(stdin);
    printf("Nombre: ");
    gets(estudiante->nombre);
    fflush(stdin);
    printf("Dirección: ");
    gets(estudiante->direccion);
    fflush(stdin);
    printf("Carrera: ");
    gets(estudiante->carrera);
    fflush(stdin);
    printf("Promedio: ");
    scanf("%f", &estudiante->promedio);
}
// Función para mostrar datos de un alumno
void mostrarDatos(const struct alumno *estudiante)
{
    // Muestra datos usando puts(imprime una cadena de caracteres en la salida estandar)
    printf("Matrícula: %d\n", estudiante->matricula);
    printf("Nombre: ");
    puts(estudiante->nombre);
    printf("Dirección: ");
    puts(estudiante->direccion);
    printf("Carrera: ");
    puts(estudiante->carrera);
    printf("Promedio: %.2f\n", estudiante->promedio);
}