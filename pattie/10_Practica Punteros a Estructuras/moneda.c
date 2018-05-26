#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moneda.h"
#include "../Funciones/funciones.h"

int eMoneda_mostrarListado(eMoneda* listado, int limite)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        for(i=0; i<limite; i++)
        {
            if((listado + i)->id > 0)
            {
                retorno = 1;
                //Se muestra al menos un elemento del array
                eMoneda_mostrarUno(listado + i);
            }
        }
    }
    return retorno;
}

void eMoneda_mostrarUno(eMoneda* parametro)
{
     printf("\n %d - %s - %s", parametro->id, parametro->nombre, parametro->pais);
}

int eMoneda_bajarArchivo(eMoneda* listado, int limite, const char* nombreArchivo)
{
    int retorno = -1;
    int i;
    FILE* archivo;
    archivo = fopen(nombreArchivo, "w");

    if(limite > 0 && listado != NULL)
    {
        retorno = 0;

        for(i=0; i<limite; i++)
        {
            if((listado + i)->id > 0)
            {
                retorno = 1;
                //Se muestra al menos un elemento del array
                eMoneda_grabarUnoArchivo(listado + i, archivo);
            }
        }
    }

    fclose(archivo);

    return retorno;
}

void eMoneda_grabarUnoArchivo(eMoneda* parametro, FILE* archivo)
{
    char strId[TAM_ID];

    sprintf(strId, "%d", parametro->id);
    fprintf(archivo, "%s - %s - %s\n", strId, parametro->nombre, parametro->pais);
}

int eMoneda_buscarLugarLibre(eMoneda* listado,int limite)
{
    int retorno = -1;
    int i;
    int posicionLibre = -1; //Guarda la primer posicion con estado LIBRE que encuentra

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i = 0; i < limite; i++)
        {
            if((listado + i)->id == 0)
            {
                posicionLibre = i;
                break;
            }
        }

        retorno = posicionLibre; //Retorno la primera posición con estado LIBRE
    }

    return retorno;
}

int eMoneda_buscarPorId(eMoneda* listado, int limite, int id)
{
    int retorno = -1;
    int i;
    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i = 0; i < limite; i++)
        {
            if((listado + i)->id == id)
            {
                retorno = i;
                //Hallé el elemento que buscaba y retorno su indice
                break;
            }
        }
    }
    return retorno;
}

int eMoneda_alta(eMoneda* listado, int limite)
{
    int retorno = -1;
    eMoneda temporario;
    int indice;
    char confirma[3];

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        //Busca lugar libre en el array
        indice = eMoneda_buscarLugarLibre(listado, limite);
        if(indice >= 0)
        {
            retorno = -3;
            //Campos con valores iniciales calculados

            retorno = -4;
            //Campos con valores pedidos al usuario
            do
            {
                temporario.id = pedirEnteroSinValidar("Ingrese ID: ");
                if(temporario.id <= 0)
                {
                    printf("\nDebe ingresar un valor mayor a cero\n");
                }
            } while(temporario.id <= 0);

            do
            {
                pedirString("Ingrese Moneda: ", temporario.nombre, TAM_MONEDA);
                if(strcmp(temporario.nombre, "") == 0)
                {
                    printf("El dato es obligatorio, por favor reingrese\n");
                }
            } while(strcmp(temporario.nombre, "") == 0);

            do
            {
                pedirString("Ingrese Pais: ", temporario.pais, TAM_PAIS);
                if(strcmp(temporario.pais, "") == 0)
                {
                    printf("El dato es obligatorio, por favor reingrese\n");
                }
            } while(strcmp(temporario.pais, "") == 0);

            retorno = -5;
            //Confirmación de la acción por parte del usuario
            do
            {
                printf("\nSe va a dar de alta:");
                eMoneda_mostrarUno(&temporario);
                pedirString("\nConfirma esta accion? (S/N): ", confirma, 3);
                if(stricmp(confirma, "S") != 0 && stricmp(confirma, "N") != 0)
                {
                    printf("Debe ingresar S o N. Por favor reingrese\n");
                }
            } while(stricmp(confirma, "S") != 0 && stricmp(confirma, "N") != 0);

            if(stricmp(confirma, "S") == 0)
            {
                retorno = 0; //OK
                *(listado + indice) = temporario;
            }
            else //retorno = -5
            {
                printf("Accion cancelada por el usuario\n");
            }
        }
        else //retorno = -2
        {
            printf("No hay espacio suficiente para agregar datos\n");
        }
    }
    return retorno;
}
