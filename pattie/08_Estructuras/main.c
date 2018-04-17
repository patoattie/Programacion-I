#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "..\Funciones\funciones.h"

#define TAM 1

/*
Estructura de Productos con:
Codigo
Descripcion
Stock
Costo
*/

typedef struct //Va por arriba del main() y por encima de los prototipos de las funciones
{
    int codigo; //Campos o atributos
    char descripcion[30];
    int stock;
    float costo;
} sProducto; //nombre de la estructura. Se antepone una e como práctica

void mostrarProducto(sProducto);
sProducto cargarProducto(void);

int main()
{
    sProducto inventario[TAM];
    int i;

    for(i = 0; i < TAM; i++)
    {
        inventario[i] = cargarProducto();
    }


    for(i = 0; i < TAM; i++)
    {
        mostrarProducto(inventario[i]);
    }

    /*sProducto unProducto;
    sProducto otroProducto;
    sProducto p = {1, "Coca Cola", 20, 29.8};

    unProducto.codigo = 3;
    strcpy(unProducto.descripcion, "Producto 1");
    unProducto.costo = 10;
    unProducto.stock = 15;

    printf("unProducto\n");
    mostrarProducto(unProducto);

    otroProducto = unProducto; //duplico la estructura

    printf("\notroProducto\n");
    mostrarProducto(otroProducto);

    printf("\np\n");
    mostrarProducto(p);

    printf("\n%d", sizeof(sProducto));*/
    getch();
    return 0;
}

void mostrarProducto(sProducto producto)
{
    printf("\n%d", producto.codigo);
    printf(";%s", producto.descripcion);
    printf(";%5.2f", producto.costo);
    printf(";%d", producto.stock);
    printf("\n");
}

sProducto cargarProducto(void)
{
    sProducto producto;

    printf("Ingrese codigo: ");
    scanf("%d", &producto.codigo);

    printf("Ingrese descripcion: ");
    fflush(stdin);
    gets(producto.descripcion);

    printf("Ingrese stock: ");
    scanf("%d", &producto.stock);

    printf("Ingrese costo: ");
    scanf("%f", &producto.costo);

    return producto;
}
