#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "funcionesArchivo.h"

int abrirArchivo(FILE* punteroArchivo, const char* pathArchivo, const char* modoArchivo)
{
    int resultadoAperturaArchivo = 0;

    punteroArchivo = fopen(pathArchivo, modoArchivo);
    if(punteroArchivo != NULL)
    {
        resultadoAperturaArchivo = 1;
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
