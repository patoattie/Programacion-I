#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Libreria con funciones para manejar cadenas
#include <ctype.h> //para toupper

/*
Para casa:
pedir nombre, ej. "juan carlos". Debe quedar tal cual las ingreso el usuario
pedir apellido, ej. "perez garcia". Debe quedar tal cual las ingreso el usuario
calcular y mostrar apellidoNombre, ej. "Perez Garcia, Juan Carlos"
*/

void transformarApellidoNombre(char[], char[], char[]);

int main()
{
    char nombre[100];
    char apellido[100];
    char apellidoNombre[200];

    //Pido nombre
    do
    {
        printf("Ingrese Nombre: ");
        fflush(stdin);
        gets(nombre);
        if(strcmp(nombre, "") == 0) //verifico que ingrese al menos un caracter
        {
            printf("No ha ingresado ningun nombre, por favor intente nuevamente\n");
        }
    } while(strcmp(nombre, "") == 0);

    //Pido apellido
    do
    {
        printf("Ingrese Apellido: ");
        fflush(stdin);
        gets(apellido);
        if(strcmp(apellido, "") == 0) //verifico que ingrese al menos un caracter
        {
            printf("No ha ingresado ningun apellido, por favor intente nuevamente\n");
        }
    } while(strcmp(apellido, "") == 0);

    transformarApellidoNombre(apellido, nombre, apellidoNombre);

    printf("Nombre: %s\n", nombre);
    printf("Apellido: %s\n", apellido);
    printf("Apellido, Nombre: %s\n", apellidoNombre);

    return 0;
}

void transformarApellidoNombre(char apellido[], char nombre[], char apellidoNombre[])
{
    int i;
    int j = 0;

    strcpy(apellidoNombre, ""); //limpio apellido nombre

    for(i = 0; i < strlen(apellido); i++)
    {
        if(i == 0)
        {
            apellidoNombre[j] = toupper(apellido[i]);
        }
        else
        {
            if(apellido[i - 1] == ' ')
            {
                apellidoNombre[j] = toupper(apellido[i]);
            }
            else
            {
                apellidoNombre[j] = apellido[i];
            }
        }
        j++;
    }
    apellidoNombre[j] = '\0'; //Establezco cierre del string

    strcat(apellidoNombre, ", ");
    j = j + 2;
    //posicionMayuscula = 0; //El primer caracter siempre lo paso a mayúscula

    for(i = 0; i < strlen(nombre); i++)
    {
        if(i == 0)
        {
            apellidoNombre[j] = toupper(nombre[i]);
        }
        else
        {
            if(nombre[i - 1] == ' ')
            {
                apellidoNombre[j] = toupper(nombre[i]);
            }
            else
            {
                apellidoNombre[j] = nombre[i];
            }
        }
        j++;
    }
    apellidoNombre[j] = '\0'; //Establezco cierre del string
}
