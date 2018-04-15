#include <stdio.h>
#include <stdlib.h>

void mostrarVector(int[], int);
void cargarVector(int[], int);
void ordenarVectorMayorMenor(int[], int);
void ordenarVectorMenorMayor(int[], int);
int buscarMaximo(int[], int);
int buscarMinimo(int[], int);

/*
1. Cargar Datos
2. Mostrar Datos
3. Ordenar
4. Buscar Maximo y mostrar posicion
5. Salir
*/

int main()
{
    char seguir = 's';
    int opcion = 0;
    int vector[5] = {1,3,4,2,9};
    int maximo;
    int minimo;

    while(seguir == 's')
    {
        printf("1- Cargar datos\n");
        printf("2- Mostrar datos\n");
        printf("3- Ordenar\n");
        printf("4- Buscar Maximo y mostrar posicion\n");
        printf("5- Salir\n");
    }
    return 0;
}

void mostrarVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
    {
        printf("Posicion %d: %d\n", i, vector[i]);
    }
}

void cargarVector(int vector[], int tamanio)
{
    int i;
    for(i = 0; i < tamanio; i++)
    {
        printf("Ingrese un numero para la posicion %d: ", i);
        scanf("%d", &vector[i]);
    }
}

void ordenarVectorMayorMenor(int vector[], int tamanio)
{
    int i;
    int j;
    int auxiliar;

    for(i = 0; i < tamanio - 1; i++)
    {
        for(j = i + 1; j < tamanio; j++)
        {
            if(vector[i] < vector[j]) //Criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
}

void ordenarVectorMenorMayor(int vector[], int tamanio)
{
    int i;
    int j;
    int auxiliar;

    for(i = 0; i < tamanio - 1; i++)
    {
        for(j = i + 1; j < tamanio; j++)
        {
            if(vector[i] > vector[j]) //Criterio de ordenamiento
            {
                auxiliar = vector[i];
                vector[i] = vector[j];
                vector[j] = auxiliar;
            }
        }
    }
}

int buscarMaximo(int vector[], int tamanio)
{
    int i;
    int retorno;
    int flag = 0;

    for(i = 0; i < tamanio; i++)
    {
        if((vector[i] > retorno) || flag == 0)
        {
            retorno = vector[i];
            flag = 1;
        }
    }

    return retorno;
}

int buscarMinimo(int vector[], int tamanio)
{
    int i;
    int retorno;
    int flag = 0;

    for(i = 0; i < tamanio; i++)
    {
        if((vector[i] < retorno) || flag == 0)
        {
            retorno = vector[i];
            flag = 1;
        }
    }

    return retorno;
}
