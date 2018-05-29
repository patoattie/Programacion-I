#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "Dato.h"

int main()
{
    eDato* d = NULL;
    eDato* e = NULL;
    /*
    malloc(cant de bytes que pido al S.O.);
    Se castea al tipo de dato que necesito, ya que malloc devuelve void*
    */
    //d = (eDato*)malloc(sizeof(eDato));
    //Usando un constructor:
    d = new_eDato();
    //Usando un constructor que asigna valores a los campos:
    e = new_eDato_Parametros(1800, "maria");

    if(d != NULL)
    {
        eDato_set_a(d, 1600);
        eDato_set_b(d, "pedro");
        printf("%d--%s", eDato_get_a(d), eDato_get_b(d));
    }
    printf("\nDireccion de memoria d: %d", (int)d);

    if(e != NULL)
    {
        printf("\n%d--%s", eDato_get_a(e), eDato_get_b(e));
    }
    printf("\nDireccion de memoria e: %d", (int)e);

    return 0;
}
