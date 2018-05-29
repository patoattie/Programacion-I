#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Dato.h"

//Setters
int eDato_set_a(eDato* this, int valor)
{
    int ret = 0;
    if(this!=NULL && valor>1500)
    {
        this->a = valor;
        ret = 1;
    }

    return ret;
}
int eDato_set_b(eDato* this, char* valor)
{
    int ret = 0;
    if(this!=NULL && valor!=NULL)
    {
        strcpy(this->b , valor);
        ret = 1;
    }

    return ret;
}

//Getters
int eDato_get_a(eDato* this)
{
    int valor = -1;

    if(this!=NULL)
    {
        valor = this->a;
    }

    return valor;
}
char* eDato_get_b(eDato* this)
{
    char* valor;
    if(this!=NULL)
    {
       valor=this->b;
    }

    return valor;
}

//Constructores
eDato* new_eDato(void) //Constructor por defecto.
{
    eDato* retorno;
    retorno = (eDato*)malloc(sizeof(eDato));
    return retorno;
}
eDato* new_eDato_Parametros(int a, char* b)
{
    eDato* retorno;
    int estado;

    retorno = new_eDato();

    if(retorno != NULL)
    {
        estado = eDato_set_a(retorno, a);
        if(estado == 0)
        {
            printf("No se pudo asignar a\n");
        }

        estado = eDato_set_b(retorno, b);
        if(estado == 0)
        {
            printf("No se pudo asignar b\n");
        }
    }

    return retorno;
}
