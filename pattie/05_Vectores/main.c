#include <stdio.h>
#include <stdlib.h>

/* Imprime el mayor elemento de cada posicion */
/*
int main()
{
    int A[5] = {10, 5, -1, 11, 4};
    int B[5] = {9, 3, 9, 12, 6};
    int C[5] = {}; //inicializa todos los elementos de C en 0
    int i;

    for(i = 0; i < 5; i++)
    {
        if(A[i] > B[i])
        {
            C[i] = A[i];
        }
        else
        {
            C[i] = B[i];
        }
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
*/

/* Imprime:
   El par mas alto de ambos elementos
   Si no hay par va cero */
int main()
{
    int A[5] = {10, 5, -1, 11, 4};
    int B[5] = {9, 3, 9, 2, 6};
    int C[5] = {}; //inicializa todos los elementos de C en 0
    int i;

    for(i = 0; i < 5; i++)
    {
        if(A[i] > B[i])
        {
            if(A[i] % 2 == 0)
            {
                C[i] = A[i];
            }
        }
        else
        {
            if(B[i] % 2 == 0)
            {
                C[i] = B[i];
            }
        }
        printf("C[%d] = %d\n", i, C[i]);
    }

    return 0;
}
