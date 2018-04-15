#include <stdio.h>
#include <stdlib.h>

int factorial(int);
int factorialRecursivo(int);

int main()
{
    int numero = -1;
    int resultado = 1;

    while(numero < 0)
    {
        printf("Ingrese un numero mayor o igual a 0: ");
        scanf("%d", &numero);
    }

    resultado = factorial(numero);
    printf("%d! = %d (Sin recursividad)", numero, resultado);

    resultado = factorialRecursivo(numero);
    printf("\n%d! = %d (Con recursividad)", numero, resultado);

    return 0;
}

int factorial(int numero)
{
    int retorno = 1;
    int contador;

    if(numero == 0)
    {
        retorno = 1;
    }
    else
    {
        for(contador = numero; contador >= 1; contador--)
        {
            retorno = retorno * contador;
        }
    }

    return retorno;
}

int factorialRecursivo(int numero)
{
    int retorno;

    if(numero == 0)
    {
        retorno = 1; //cláusula de escape para que no desborde la pila
    }
    else
    {
        retorno = numero * factorialRecursivo(numero - 1);
    }

    return retorno;
}
