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
}