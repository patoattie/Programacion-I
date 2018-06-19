#include <stdio.h>
#include <stdlib.h>

void funcionDelegado(int (*F1)(char*), char*);
int saludar(char*);
int despedir(char*);

int main()
{
    int (*f[2])(char*) = {saludar, despedir};
    int i;
    int algo;

    funcionDelegado(saludar, "Pepe");
    funcionDelegado(despedir, "Pepe");

    printf("\n");

    for(i = 0; i < 2; i++)
    {
        algo = (f[i])("Juan"); //Con notacion de vectores
        printf("\nRetorno %d\n", algo);
        algo = (*(f + i))("Maria"); //Con notacion de punteros
        printf("\nRetorno %d\n", algo);
    }

    return 0;
}

void funcionDelegado(int (*F1)(char*), char* mensaje)
{
    int algo = F1(mensaje);
    printf("\nRetorno %d\n", algo);
}

int saludar(char* mensaje)
{
    printf("Hola %s", mensaje);
    return 1;
}

int despedir(char* mensaje)
{
    printf("Chau %s", mensaje);
    return 0;
}
