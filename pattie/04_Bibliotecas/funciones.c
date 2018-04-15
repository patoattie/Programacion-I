#include <stdio.h>     //se referencia igual en el archivo de implementación, igual que en el main
#include "funciones.h" //se referencia igual en el archivo de implementación, igual que en el main

int pedirEntero(char mensaje[], int minimo, int maximo)
{
    int numero;

    printf("%s", mensaje);
    scanf("%d", &numero);

    numero = validarEntero(numero, minimo, maximo);

    return numero;
}

int validarEntero(int dato, int minimo, int maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %d y %d: ", minimo, maximo);
        scanf("%d", &dato);
    }

    return dato;
}

float pedirFlotante(char mensaje[], float minimo, float maximo)
{
    float numero;

    printf("%s", mensaje);
    scanf("%f", &numero);

    numero = validarFlotante(numero, minimo, maximo);

    return numero;
}

float validarFlotante(float dato, float minimo, float maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %f y %f: ", minimo, maximo);
        scanf("%f", &dato);
    }

    return dato;
}

double pedirDoble(char mensaje[], double minimo, double maximo)
{
    double numero;

    printf("%s", mensaje);
    scanf("%lf", &numero);

    numero = validarDoble(numero, minimo, maximo);

    return numero;
}

double validarDoble(double dato, double minimo, double maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %lf y %lf: ", minimo, maximo);
        scanf("%lf", &dato);
    }

    return dato;
}

long pedirLargo(char mensaje[], long minimo, long maximo)
{
    long numero;

    printf("%s", mensaje);
    scanf("%ld", &numero);

    numero = validarDoble(numero, minimo, maximo);

    return numero;
}

long validarLargo(long dato, long minimo, long maximo)
{
    while(dato < minimo || dato > maximo)
    {
        printf("ERROR Ingrese un numero entre %ld y %ld: ", minimo, maximo);
        scanf("%ld", &dato);
    }

    return dato;
}
