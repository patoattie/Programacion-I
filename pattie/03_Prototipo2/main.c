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
void sumarNumeros (int, int);

int main()
{
    //declaro los parámetros de entrada
    int numero1;
    int numero2;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    //Llamada a la función
    sumarNumeros(numero1, numero2);

    return 0;
}

//Desarrollo o implementación de la función
//Por defecto los tipos primitivos se pasan por valor, no por referencia
void sumarNumeros (int primerNumero, int segundoNumero) //Parámetros formales
{
    int resultado;

    /*Comienzo de la lógica de la función*/
    resultado = primerNumero + segundoNumero;
    printf("Resultado de la suma: %d", resultado);
    /*Fin de la lógica de la función*/
}
