#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main()
{
    int porcentajeAumento;
    float sueldo;
    float aumentoSueldo;
    float sueldoAumentado;
    char nombre;

    printf("Ingrese porcentaje de aumento: ");
    scanf("%d", &porcentajeAumento);
    printf("Ingrese nombre: ");
    nombre = getche();
    printf("\n");
    printf("Ingrese sueldo: ");
    scanf("%f", &sueldo);

    aumentoSueldo = sueldo * ((float)porcentajeAumento / 100);
    sueldoAumentado = sueldo + aumentoSueldo;

    printf("A - Nombre: %c\nB - Sueldo: %f\nC - Aumento de sueldo: %f\nD - Sueldo con aumento: %f\nE - Porcentaje: %d%%", nombre, sueldo, aumentoSueldo, sueldoAumentado, porcentajeAumento);

    return 0;
}
