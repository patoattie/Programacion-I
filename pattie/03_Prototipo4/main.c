#include <stdio.h>
#include <stdlib.h>

/*
prototipo | retorna | recibe
----------|---------|-------
p1        |    S    |   S
p2        |    N    |   S
p3        |    N    |   N (función nula)
p4        |    S    |   N
*/

//Declaración o prototipo de la función
//Qué hace la función, qué recibe y qué devuelve
//tipo_de_dato_devuelto identificador_de_la_función (entrada1, entrada2, ..., entrada n)
int sumarNumeros (void);

int main()
{
    int resultado; //declaro la variable que va a contener el resultado de la función.

    //Llamada a la función
    resultado = sumarNumeros(); //Parámetros actuales

    printf("Resultado de la suma: %d", resultado);
    return 0;
}

//Desarrollo o implementación de la función
//Por defecto los tipos primitivos se pasan por valor, no por referencia
int sumarNumeros (void) //Parámetros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la lógica de la función*/
    int numero1;
    int numero2;

    printf("Ingrese primer numero: ");
    scanf("%d", &numero1);
    printf("Ingrese segundo numero: ");
    scanf("%d", &numero2);

    retorno = numero1 + numero2;
    /*Fin de la lógica de la función*/

    return retorno; //Me aseguro de crear una cláusula de retorno con la variable, como buena práctica.
}
