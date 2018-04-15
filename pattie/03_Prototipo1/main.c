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
/** \brief --> Qué hace la función, por ejemplo "Permite sumar dos números enteros".
 *
 * \param --> Primer número a sumar
 * \param --> Segundo número a sumar
 * \return --> El resultado de la suma de los números
 *
 */
int sumarNumeros (int, int);

int main()
{
    int resultado; //declaro la variable que va a contener el resultado de la función.
    //declaro los parámetros de entrada
    int numero1 = 5;
    int numero2 = 9;

    //Llamada a la función
    resultado = sumarNumeros(numero1, numero2); //Parámetros actuales

    printf("Resultado de la suma: %d", resultado);
    return 0;
}

//Desarrollo o implementación de la función
//Por defecto los tipos primitivos se pasan por valor, no por referencia
int sumarNumeros (int primerNumero, int segundoNumero) //Parámetros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la lógica de la función*/
    retorno = primerNumero + segundoNumero;
    /*Fin de la lógica de la función*/

    return retorno; //Me aseguro de crear una cláusula de retorno con la variable, como buena práctica.
}
