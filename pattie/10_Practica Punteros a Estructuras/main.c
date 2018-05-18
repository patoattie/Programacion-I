#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "moneda.h"
#include "../Funciones/funciones.h"

/*
Agregar una funcion que permita listar en un archivo las monedas
*/

int main()
{
    char seguir='s';
    int puntoMenu;
    int opcion;
    eMoneda listaMonedas[TAM_MONEDA] = {{"Argentina", 1, "Peso"}, {"Brasil", 2, "Real"}, {"EEUU", 3, "Dolar"}};
    eMoneda* pMonedas = listaMonedas;

    while(seguir=='s')
    {
        limpiarPantalla();

        printf("1- Cargar monedas\n");
        printf("2- Mostrar monedas\n");
        printf("3- Borrar monedas\n");
        printf("4- Bajar a archivo\n\n");
        printf("5- Salir\n");

        scanf("%d",&opcion);

        switch(opcion)
        {
            case 1:
                puntoMenu = eMoneda_alta(pMonedas, TAM_MONEDA);
                if(puntoMenu == 0)
                {
                    printf("\nAlta de moneda OK");
                }
                break;
            case 2:
                puntoMenu = eMoneda_mostrarListado(pMonedas, TAM_MONEDA);
                switch(puntoMenu)
                {
                case -1:
                    printf("\n*** ERROR EN LA LLAMADA A MOSTRAR (puntero NULL o limite 0 o negativo) ***");
                    break;
                case 0:
                    printf("\n*** NO HAY ELEMENTOS PARA MOSTRAR ***");
                    break;
                default:
                    printf("\nListado OK");
                }
                break;
            case 3:
                //puntoMenu = eMoneda_baja(pMonedas, TAM_MONEDA);
                if(puntoMenu == 0)
                {
                    printf("\nBaja de moneda OK");
                }
                break;
            case 4:
                puntoMenu = eMoneda_bajarArchivo(pMonedas, TAM_MONEDA, "monedas.txt");
                switch(puntoMenu)
                {
                case -1:
                    printf("\n*** ERROR EN LA LLAMADA A MOSTRAR (puntero NULL o limite 0 o negativo) ***");
                    break;
                case 0:
                    printf("\n*** NO HAY ELEMENTOS PARA MOSTRAR ***");
                    break;
                default:
                    printf("\nListado OK");
                }
                break;
            case 5:
                seguir = 'n';
                break;
            default:
                printf("\nOpcion no contemplada, por favor vuelva a elegir");
                break;
        }

        if(seguir=='s')
        {
            printf("\n");
            pausarEjecucion();
        }
    }

    return 0;
}

