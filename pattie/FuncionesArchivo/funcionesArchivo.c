#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesArchivo.h"

int abrirArchivo(FILE* punteroArchivo, const char* pathArchivo, const char* modoArchivo)
{
    int resultadoAperturaArchivo = -1;
    int modoValido;

    if(punteroArchivo == NULL)
    {
        modoValido = validarModoArchivo(modoArchivo);

        if(modoValido == 1)
        {
            resultadoAperturaArchivo = 0;

            punteroArchivo = fopen(pathArchivo, modoArchivo);
            if(punteroArchivo != NULL)
            {
                resultadoAperturaArchivo = 1;
            }
        }
    }

    return resultadoAperturaArchivo;
}

int validarModoArchivo(const char* modoArchivo)
{
    int retorno = 0;

    if(strcmp(modoArchivo, MODO_ESCRITURA_BINARIO) == 0
       || strcmp(modoArchivo, MODO_ESCRITURA_TEXTO) == 0
       || strcmp(modoArchivo, MODO_LECTURA_BINARIO) == 0
       || strcmp(modoArchivo, MODO_LECTURA_TEXTO) == 0)
    {
        retorno = 1;
    }

    return retorno;
}

int cerrarArchivo(FILE* punteroArchivo)
{
    int resultadoCierreArchivo = -1;

    if(punteroArchivo != NULL)
    {
        resultadoCierreArchivo = fclose(punteroArchivo); //Si el archivo es cerrado exitosamente se retorna un 0, en caso contrario se devuelve –1
        resultadoCierreArchivo++; //Para que mi función devuelva 1 con cierre exitoso, y 0 con cierre incorrecto incremento la variable en 1.
    }

    return resultadoCierreArchivo;
}

int escribirArchivoTexto(const char* texto, FILE* punteroArchivo, int* huboError)
{
    int cantidadEscrita = 0;
    int longitudCadena;

    *huboError = 1;

    if(punteroArchivo != NULL)
    {
        longitudCadena = strlen(texto);
        cantidadEscrita = fwrite(texto, sizeof(char), longitudCadena, punteroArchivo);

        if(cantidadEscrita == longitudCadena)
        {
            *huboError = 0;
        }
    }

    return cantidadEscrita;
}

int leerArchivoTexto(char* texto, FILE* punteroArchivo, int longitudCadena, int* huboError, int* finArchivo)
{
    int cantidadLeida = 0;

    *huboError = 1;
    *finArchivo = 0;

    if(punteroArchivo != NULL)
    {
        cantidadLeida = fread(texto, sizeof(char), longitudCadena, punteroArchivo);

        if(cantidadLeida == longitudCadena)
        {
            *huboError = 0;
        }
        else
        {
            if(feof(punteroArchivo))
            {
                *huboError = 0;
                *finArchivo = 1;
            }
        }
    }

    return cantidadLeida;
}
