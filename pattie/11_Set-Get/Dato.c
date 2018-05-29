#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Dato.h"

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

