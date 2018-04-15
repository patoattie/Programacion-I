#include <stdio.h>
#include <stdlib.h>
#include <string.h> //Libreria con funciones para manejar cadenas

/*
Para casa:
pedir nombre, ej. "juan carlos". Debe quedar tal cual las ingreso el usuario
pedir apellido, ej. "perez garcia". Debe quedar tal cual las ingreso el usuario
calcular y mostrar apellidoNombre, ej. "Perez Garcia, Juan Carlos"
*/

int main()
{
    char cadena[10]="hola"; //se debe declarar una posicion mas de la cantidad de caracteres que necesito, para poder guardar el caracter de terminacion \0
    char cadena2[150]="chau";
    int len;
    int comp;
    int comp2;
    printf("Ingrese una frase: ");
    //scanf("%s", cadena); //scanf toma el caracter espacio como \0 y trunca la cadena. No se usa para cadenas.
    gets(cadena); //Para leer cadenas, en win se usa gets. En linux se usa fgets pero agrega un \n antes del \0 de terminacion.

    printf("Ingrese otra frase: ");
    gets(cadena2);

    //cadena = "pepe"; //No funciona, los operadores estan definidos solamente para tipos primitivos. Si es valido para definir por extension en la declaracion de la variable.

    printf("La frase ingresada es: %s\n", cadena);
    //puts(cadena); //Funcion especializada para mostrar cadenas. No admite mensajes. Se rompe con cualquier otro tipo de datos.
    printf("La otra frase ingresada es: %s\n", cadena2);

    len = strlen(cadena); //devuelve en valor entero la cantidad de caracteres de una cadena
    printf("La frase tiene %d caracteres\n", len);

    //cadena2 = cadena; //Tampoco funciona, por el mismo problema de los operadores con las cadenas.
    //strcpy(cadena2, cadena); //Se usa strcpy, los argumentos son destino, origen. El destinto debe ser de igual o mayor tamaño que el origen.
    //printf("La frase duplicada con strcpy es: %s\n", cadena2);

    //strcpy(cadena2, "pepe");
    //printf("A cadena2 le asigno el literal pepe: %s\n", cadena2);

    //Para comparar se usa strcmp, si devuelve 0 ambas son iguales, positivo si el origen es posterior alfabeticamente al destino, y -1 si el origen es anterior alfabeticamente al destino
    //Es case sensitive
    comp = strcmp(cadena, cadena2);
    printf("Comparacion: %d\n", comp);

    //Para comparar sin tener en cuenta el case se usa stricmp
    comp2 = stricmp(cadena, cadena2);
    printf("Comparacion: %d\n", comp2);

    //Para concatenar cadenas
    strcat(cadena2, cadena);
    printf("Concatenacion: %s\n", cadena2);

    //Para convertir a mayuscula
    strupr(cadena);

    //Para convertir a minuscula
    strlwr(cadena2);
    printf("%s\n", cadena);
    printf("%s\n", cadena2);

    return 0;
}
