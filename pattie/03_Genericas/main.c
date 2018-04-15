#include <stdio.h>
#include <stdlib.h>

/*
En casa, validar flotante, char, y doble
TP -> Calculadora con funciones
*/

/** \brief Pide un número entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
int pedirEntero(char[], int, int);

/** \brief Pide un número entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
int validarEntero(int, int, int);

int main()
{
    int edad;
    int legajo;
    int nota;

    edad = pedirEntero("Ingrese edad: ", 1, 60);
    legajo = pedirEntero("Ingrese legajo: ", 1, 1500);
    nota = pedirEntero("Ingrese nota: ", 1, 10);

    printf("La edad ingresada es %d", edad);
    printf("\nEl legajo ingresado es %d", legajo);
    printf("\nLa nota ingresada es %d", nota);

    return 0;
}

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
