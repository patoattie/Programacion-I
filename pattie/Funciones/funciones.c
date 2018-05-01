#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h> //para toupper
#include "funciones.h"

#define STR_BUFFER 100

float pedirFlotante(char mensaje[], float minimo, float maximo)
{
    float numero;

    printf("%s", mensaje);
    scanf("%f", &numero);

    numero = validarFlotante(numero, minimo, maximo);

    return numero;
}

float pedirFlotanteSinValidar(char mensaje[])
{
    float numero;

    printf("%s", mensaje);
    scanf("%f", &numero);

    return numero;
}

float calcularSuma(float sumandoA, float sumandoB)
{
    float resultado;
    resultado = sumandoA + sumandoB;

    return resultado;
}

float calcularResta(float minuendoA, float minuendoB)
{
    float resultado;
    resultado = minuendoA - minuendoB;

    return resultado;
}

float calcularCociente(float dividendo, float divisor)
{
    float resultado;
    resultado = dividendo / divisor;

    return resultado;
}

int validarCociente(float dividendo, float divisor)
{
    int resultado;

    if(divisor == 0)
    {
        if(dividendo == 0)
        {
            resultado = 2; //Indeterminacion
        }
        else
        {
            resultado = 1; //Infinito
        }
    }
    else
    {
        resultado = 0; //OK
    }

    return resultado;
}

float calcularProducto(float multiplicando, float multiplicador)
{
    float resultado;
    resultado = multiplicando * multiplicador;

    return resultado;
}

int calcularFactorial(float factor)
{
    float resultado = 1;
    int contador;

    if(factor == 0)
    {
        resultado = 1;
    }
    else
    {
        for(contador = factor; contador >= 1; contador--)
        {
            resultado = resultado * contador;
        }
    }

    return resultado;
}

int validarFactorial(float factor)
{
    int resultado;
    int factorEntero;

    if(factor < 0)
    {
        resultado = 2; //Numero negativo
    }
    else
    {
        factorEntero = validarEnteroDecimal(factor);

        switch(factorEntero)
        {
        case 1:
            resultado = 1; //Numero decimal
            break;
        case 0:
            resultado = 0; //Numero entero
            break;
        default:
            printf("Caso no contemplado en la funcion validarEnteroDecimal. Devolvio %d\n", factorEntero);
            resultado = 1; //Lo retorno como si fuera numero decimal.
            break;
        }
    }

    return resultado;
}

void limpiarPantalla(void)
{
    system("cls");
}

void pausarEjecucion(void)
{
    system("pause");
}

int validarEnteroDecimal(float numero)
{
    int numeroEntero = (int)numero;
    int retorno;

    if(numero != numeroEntero)
    {
        retorno = 1; //No es entero
    }
    else
    {
        retorno = 0; //Es entero
    }

    return retorno;
}

int validarLargoDecimal(float numero)
{
    long numeroLargo = (long)numero;
    int retorno;

    if(numero != numeroLargo)
    {
        retorno = 1; //No es entero
    }
    else
    {
        retorno = 0; //Es entero
    }

    return retorno;
}

int pedirEntero(char mensaje[], int minimo, int maximo)
{
    int numero;
    float ingreso;
    int esDecimal;

    printf("%s", mensaje);
    do
    {
        scanf("%f", &ingreso);
        esDecimal = validarEnteroDecimal(ingreso);
        if(esDecimal == 1)
        {
            printf("ERROR Debe ingresar un numero sin digitos decimales: ");
        }
    } while(esDecimal == 1);

    numero = (int)ingreso;
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

int pedirEnteroSinValidar(char mensaje[])
{
    int numero;
    float ingreso;
    int esDecimal;

    printf("%s", mensaje);
    do
    {
        scanf("%f", &ingreso);
        esDecimal = validarEnteroDecimal(ingreso);
        if(esDecimal == 1)
        {
            printf("ERROR Debe ingresar un numero sin digitos decimales: ");
        }
    } while(esDecimal == 1);

    numero = (int)ingreso;

    return numero;
}

int sumarNumeros (int primerNumero, int segundoNumero) //Parámetros formales
{
    int retorno; //Creo una variable de retorno con el mismo tipo de datos como primer medida.

    /*Comienzo de la lógica de la función*/
    retorno = primerNumero + segundoNumero;
    /*Fin de la lógica de la función*/

    return retorno; //Me aseguro de crear una cláusula de retorno con la variable, como buena práctica.
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
    int esDecimal;
    float ingreso;

    printf("%s", mensaje);
    do
    {
        scanf("%f", &ingreso);
        esDecimal = validarLargoDecimal(ingreso);
        if(esDecimal == 1)
        {
            printf("ERROR Debe ingresar un numero sin digitos decimales: ");
        }
    } while(esDecimal == 1);

    numero = (long)ingreso;
    numero = validarLargo(numero, minimo, maximo);

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

void pedirString(char mensaje[], char cadena[], int longitud)
{
    char stringBuffer[STR_BUFFER];
    longitud = longitud - 2; //Resto dos para contemplar \n y \0

    if(longitud > STR_BUFFER - 2)
    {
        printf("\nLa longitud de la cadena no puede superar %d caracteres", STR_BUFFER - 2);
    }
    else
    {
        printf("%s", mensaje);
        fflush(stdin);
        fgets(stringBuffer, STR_BUFFER, stdin);

        validarString(stringBuffer, longitud);

        strcpy(cadena, stringBuffer);
        cadena[strlen(cadena) - 1] = '\0'; //Quito el \n que deja antes de \0 el fgets
    }
}

void validarString(char cadena[], int longitud)
{
    while(strlen(cadena) - 1 > longitud)
    {
        printf("ERROR El texto ingresado supera los %d caracteres\npor favor reingrese: ", longitud);
        fflush(stdin);
        fgets(cadena, STR_BUFFER, stdin);
    }
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

void cargarVectorAleatorio(int vector[], int posicion, char mensaje[])
{
    vector[posicion] = pedirEnteroSinValidar(mensaje);
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

int buscarPosicionElemento(int vector[], int tamanio, int elemento)
{
    int i;
    int retorno = -1;

    for(i = 0; i < tamanio; i++)
    {
        if(vector[i] == elemento)
        {
            retorno = i;
            break; //salgo del bucle for cuando encuentro la primera ocurrencia
        }
    }

    return retorno;
}

void transformarApellidoNombre(const char apellido[], const char nombre[], char apellidoNombre[])
{
    int i;
    int j = 0;

    strcpy(apellidoNombre, ""); //limpio apellido nombre

    for(i = 0; i < strlen(apellido); i++)
    {
        if(i == 0)
        {
            apellidoNombre[j] = toupper(apellido[i]);
        }
        else
        {
            if(apellido[i - 1] == ' ')
            {
                apellidoNombre[j] = toupper(apellido[i]);
            }
            else
            {
                apellidoNombre[j] = apellido[i];
            }
            apellidoNombre[j + 1] = '\0'; //Establezco cierre del string
        }
        j++;
    }
    //apellidoNombre[j] = '\0'; //Establezco cierre del string

    strcat(apellidoNombre, ", ");
    j = j + 2;
    //posicionMayuscula = 0; //El primer caracter siempre lo paso a mayúscula

    for(i = 0; i < strlen(nombre); i++)
    {
        if(i == 0)
        {
            apellidoNombre[j] = toupper(nombre[i]);
        }
        else
        {
            if(nombre[i - 1] == ' ')
            {
                apellidoNombre[j] = toupper(nombre[i]);
            }
            else
            {
                apellidoNombre[j] = nombre[i];
            }
            apellidoNombre[j + 1] = '\0'; //Establezco cierre del string
        }
        j++;
    }
    //apellidoNombre[j] = '\0'; //Establezco cierre del string
}
