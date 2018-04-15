#include <stdio.h>
#include <stdlib.h>

/*
prototipo | retorna | recibe
p1        |    S    |   S
p2        |    N    |   S
p3        |    N    |   N (función nula)
p4        |    S    |   N
*/


//Declaración o prototipo de la función
//Qué hace la función, qué recibe y qué devuelve
//tipo_de_dato_devuelto identificador_de_la_función (entrada1, entrada2, ..., entrada n)
void sumarNumeros (void);

int main()
{
    //Llamada a la función
    sumarNumeros();

    return 0;
}

//Desarrollo o implementación de la función
//Por defecto los tipos primitivos se pasan por valor, no por referencia
void sumarNumeros (void) //Parámetros formales
{
    /*Comienzo de la lógica de la función*/
    int numero1;
    int numero2;
    int resultado;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    resultado = numero1 + numero2;
    printf("Resultado de la suma: %d", resultado);
    /*Fin de la lógica de la función*/
}
