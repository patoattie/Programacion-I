#include <stdio.h>
#include <stdlib.h>

#define TAM 5

int main()
{
    int* pEntero;
    int* pEntero2;
    int* pEnteroAuxiliar;
    int i;

    pEntero = (int*)malloc(sizeof(int) * TAM);
    pEntero2 = (int*)malloc(sizeof(int) * TAM); //Veo que al hacer realloc cambia la direccion de memoria a la que apunta el puntero.

    for(i = 0; i < TAM; i++)
    {
        *(pEntero + i) = i + 1;
    }

    for(i = 0; i < TAM; i++)
    {
        printf("(%d) - pEntero[%d]: %d\n", (pEntero + i), i, *(pEntero + i));
    }

    printf("\n");

    pEnteroAuxiliar = (int*)realloc(pEntero, sizeof(int) * (TAM * 2));
    if(pEnteroAuxiliar != NULL)
    {
        pEntero = pEnteroAuxiliar;

        for(i = TAM; i < TAM * 2; i++)
        {
            *(pEntero + i) = i + 1;
        }

        for(i = 0; i < TAM * 2; i++)
        {
            printf("(%d) - pEntero[%d]: %d\n", (pEntero + i), i, *(pEntero + i));
        }

        pEntero = (int*)realloc(pEntero, sizeof(int) * 3);
        printf("\n");

        for(i = 0; i < TAM * 2; i++)
        {
            printf("(%d) - pEntero[%d]: %d\n", (pEntero + i), i, *(pEntero + i));
        }
    }
    else
    {
        printf("\nNo se puede redimensionar");
    }

    return 0;
}
