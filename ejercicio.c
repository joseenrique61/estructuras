#include <stdio.h>
#include <string.h>

int main() 
{
    struct alumno {
        char nombre[20];
        char direccion[20];
        char carrera[20];
        int edad;
        float promedio;
    };

    struct alumno alumnos[5];

    for (int i = 0; i < 5; i++){
        printf("Ingrese los datos del alumno %i\n", i + 1);

        fflush(stdin);
        printf("Ingrese el nombre: ");
        gets(alumnos[i].nombre);

        printf("Ingrese la direccion: ");
        gets(alumnos[i].direccion);

        printf("Ingrese la carrera: ");
        gets(alumnos[i].carrera);

        fflush(stdin);
        printf("Ingrese la edad: ");
        scanf("%i", &alumnos[i].edad);

        fflush(stdin);
        printf("Ingrese el promedio: ");
        scanf("%f", &alumnos[i].promedio);
    }

    for (int i = 0; i < 5; i++){
        printf("Alumno %i:\n", i + 1);
        puts("Nombre: ");
        puts(alumnos[i].nombre);
        puts("\nDireccion: ");
        puts(alumnos[i].direccion);
        puts("\nCarrera: ");
        puts(alumnos[i].carrera);
        printf("\nEdad: %i\nPromedio: %f\n\n", alumnos[i].edad, alumnos[i].promedio);
    }
}