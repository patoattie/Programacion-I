#include <stdio.h>
#include <stdlib.h>

int main()
{
    /*
    1) Abrir archivo
    2) Escribir o leer
    3) Cerrar archivo
    */
    FILE* archivo; //puntero a la estructura FILE de stdio.h
    char bufferIn[100];

    archivo = fopen("fichero.txt", "w"); //abro el archivo de texto para escritura (w) Write para texto

    fprintf(archivo, "Hola"); //escribo en el archivo (solo para archivos de texto)
    fprintf(archivo, "%s", "\nHola con mascara"); //escribo en el archivo con máscara (solo para archivos de texto)

    fclose(archivo); //cierro el archivo

    archivo = fopen("fichero.txt", "r"); //abro el archivo de texto para lectura (r) Read para texto

    while(!feof(archivo)) //Mientras no haya llegado al fin del archivo
    {
        fgets(bufferIn, 100, archivo); //leo el archivo (variable, cant de caracteres que leo, puntero a FILE)
        puts(bufferIn); //muestro la variable donde guardo lo que lei del archivo
    }

    //remove("fichero.txt"); //elimino el archivo del disco

    return 0;
}
