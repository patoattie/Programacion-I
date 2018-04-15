#include <stdio.h>
#include "funciones.h"

/*
En .h van los prototipos y en .c van las implementaciones
*/

int main()
{
    int edad;
    int legajo;
    int nota;

    edad = pedirEntero("Ingrese edad: ", 1, 60);
    legajo = pedirEntero("Ingrese legajo: ", 1, 1500);
    nota = pedirEntero("Ingrese nota: ", 1, 10);

    printf("La edad ingresada es %d", edad);
    printf("\nEl legajo ingresado es %d", legajo);
    printf("\nLa nota ingresada es %d", nota);

    return 0;
}
