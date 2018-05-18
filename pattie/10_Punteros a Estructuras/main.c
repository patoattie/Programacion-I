#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    int a;
    char b;
} dato;

int main()
{

    int i;

    dato lista[2] = {{1, 'c'}, {2, 'a'}};
    dato* p;

    p = lista;

    for(i = 0; i < 2; i++)
    {
        printf("(*(p + i)).a - (*(p + i)).b: %d - %c\n", (*(p + i)).a, (*(p + i)).b);
        //El operador -> reemplaza al operador * y al operador . para acceder a estructuras a través de punteros
        printf("(p + i)->a - (p + i)->b: %d - %c\n", (p + i)->a, (p + i)->b);
    }


    /*
    dato datito = {1, 'c'};
    dato* p;

    p = &datito;

    printf("p: %d\n", p);
    printf("&datito.a: %d\n", &datito.a);
    printf("&datito: %d\n", &datito);
    printf("datito: %d\n", datito);
    printf("*p: %d\n", *p);
    //Se nota (*p).a para acceder al campo de una estructura a través de un puntero
    //porque el operador punto (.) tiene preeminencia por sobre el operador de inacceso (*)
    printf("(*p).a: %d\n", (*p).a);
    printf("(*p).b: %c\n", (*p).b);
    //Usando el operador (->)
    //El operador -> reemplaza al operador * y al operador . para acceder a estructuras a través de punteros
    printf("p->a: %d\n", p->a);
    printf("p->b: %c\n", p->b);
    */

    return 0;
}
