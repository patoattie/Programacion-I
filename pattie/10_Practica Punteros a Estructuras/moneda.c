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

int eMoneda_bajarArchivo(eMoneda* listado, int limite, char nombreArchivo[])
{
    int retorno = -1;
    int i;
    FILE* archivo;

    if(limite > 0 && listado != NULL)
    {
        retorno = 0;
        archivo = fopen(nombreArchivo, "w");

        for(i=0; i<limite; i++)
        {
            if((listado + i)->id > 0)
            {
                retorno = 1;
                //Se muestra al menos un elemento del array
                eMoneda_grabarUnoArchivo(listado + i);
            }
        }
    }

    fclose(nombreArchivo);

    return retorno;
}

void eMoneda_grabarUnoArchivo(eMoneda* parametro)
{
     fprintf("%s - %s - %s\n", (char)parametro->id, parametro->nombre, parametro->pais);
}

int eMoneda_buscarLugarLibre(eMoneda* listado,int limite)
{
    int retorno = -1;
    int i;
    int posicionLibre = -1; //Guarda la primer posicion con estado LIBRE que encuentra

    if(limite > 0 && listado != NULL)
    {
        retorno = -2;
        for(i=0;i<limite;i++)
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
        for(i=0;i<limite;i++)
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

int eMoneda_alta(eMoneda* listado,int limite)
{
    int retorno = -1;
    int indice;

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
                printf("Ingrese ID: ");
                scanf("%d", &((listado + indice)->id));
                if((listado + indice)->id <= 0)
                {
                    printf("\nDebe ingresar un valor mayor a cero\n");
                }
            } while((listado + indice)->id <= 0);

            do
            {
                fflush(stdin);
                printf("Ingrese Moneda: ");
                gets((listado + indice)->nombre);
                if(strcmp((listado + indice)->nombre, "") == 0)
                {
                    printf("El dato es obligatorio, por favor reingrese\n");
                }
            } while(strcmp((listado + indice)->nombre, "") == 0);

            do
            {
                fflush(stdin);
                printf("Ingrese Pais: ");
                gets((listado + indice)->pais);
                if(strcmp((listado + indice)->pais, "") == 0)
                {
                    printf("El dato es obligatorio, por favor reingrese\n");
                }
            } while(strcmp((listado + indice)->pais, "") == 0);

            retorno = 0; //OK
        }
        else //retorno = -2
        {
            printf("No hay espacio suficiente para agregar datos\n");
        }
    }
    return retorno;
}
