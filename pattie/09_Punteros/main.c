#include <stdio.h>
#include <stdlib.h>

/*
1) Recibe el array como array y lo maneja con notación de array
2) Recibe el array como array y lo maneja con aritmética de punteros
3) Recibe el puntero y lo maneja con notación de array
4) Recibe el puntero y lo maneja con aritmética de punteros
*/

void cargarVectorConPuntero(int*, int);
void mostrarVectorConPuntero(int*, int);

int main()
{
    int vec[3];

    cargarVectorConPuntero(vec, 3); //El vector es en sí mismo un puntero
    mostrarVectorConPuntero(vec, 3); //El vector es en sí mismo un puntero

    return 0;
}

void cargarVectorConPuntero(int* pEntero, int limite)
{
    int i;

    for(i = 0; i < limite; i++)
    {
        printf("Ingrese valor para la posicion %d: ", i);
        scanf("%d", pEntero + i);
    }
}

void mostrarVectorConPuntero(int* pEntero, int limite)
{
    int i;

    for(i = 0; i < limite; i++)
    {
        printf("Valor posicion %d: %d\n", i, *(pEntero + i));
    }
}

/*
int main()
{
    //Se pone un * al lado del tipo por convención para indicar que es un puntero al tipo de dato.
    //Ambas variables están en la pila.

    int* pEntero = NULL; //Siempre se deben inicializar los punteros en NULL, para evitar que falle el programa.
    int* otroPuntero = NULL; //Siempre se deben inicializar los punteros en NULL, para evitar que falle el programa.
    int miEntero;
    pEntero = &miEntero; //Asigno la dirección de memoria de la variable al puntero
    otroPuntero = pEntero; //Asigno el contenido de un puntero a otro puntero. Los dos apuntan luego a la misma variable.
    //(*) -> Operador de indirección o inacceso.
    *pEntero = 5; //Asigno valor a la variable a través del puntero utilizando el operador de inacceso

    if(pEntero != NULL && otroPuntero != NULL)
    {
        printf("El valor de donde apunta *pEntero es: %d \n", *pEntero);
        printf("El valor miEntero es %d \n", miEntero);
        printf("El valor de pEntero es: %d \n", pEntero);
        pEntero = pEntero + 1; //Genero un desplazamiento del valor del puntero en 4 bytes.
        printf("El valor de pEntero + 0 es: %d \n", pEntero + 0);
        printf("El valor de pEntero + 1 es: %d \n", pEntero + 1); //Incrementa 4 bytes (aritmética de punteros, 4 bytes es el sizeof de int)
        printf("El valor de pEntero + 2 es: %d \n", pEntero + 2); //Incrementa 8 bytes (aritmética de punteros, 4 bytes es el sizeof de int)
        printf("El valor de pEntero - 1 es: %d \n", pEntero - 1); //Decrementa 4 bytes (aritmética de punteros, 4 bytes es el sizeof de int)
        printf("La direccion de memoria de miEntero es %d \n", &miEntero);
        printf("La direccion de memoria de pEntero es: %d \n", &pEntero);
        printf("El valor de donde apunta *otroPuntero es: %d \n", *otroPuntero);
        printf("El valor de otroPuntero es: %d \n", otroPuntero);
        printf("La direccion de memoria de otroPuntero es: %d \n", &otroPuntero);
    }
    else
    {
        printf("\nLos punteros no estan inicializados");
    }

    return 0;
}
*/
