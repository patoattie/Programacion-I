#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAB 9
#define TAM 3

/*
HACER ABM
----------
1. Carga aleatoria ordenada, se pide de a uno y se va dejando registro de ubicaciones libres con el valor ilógico 0 para legajo
2. Mostrar ordenado
3. Modificar
   (mostrar datos cargados, pedir al usuario cual legajo modificar, modificar la nota1,
    guardar en un auxiliar la nota anterior, si esta seguro dejar el cambio y sino volver al valor anterior)
4. Bajas
5. Salir

"1. ALTAS\n2. MOSTRAR\n3. MODIFICAR\n4. BAJAS\n5. SALIR\nElija una opcion: "
*/

//hacer buscarLibre para carga aleatoria ordenada

float calculapromedio(int nota,int nota2);
void ordenaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50]);
void mostrar_resultado(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50]);
void cargaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50]);

int main()
{
    int legajo[TAM];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    char nombre[TAM][50];

    cargaVectores(legajo,nota1,nota2,promedio,nombre);
    ordenaVectores(legajo,nota1,nota2,promedio,nombre);
    mostrar_resultado(legajo,nota1,nota2,promedio,nombre);
    return 0;
}

float calculapromedio(int nota,int nota2)
{
    float rta;
    rta= ((float)nota+nota2)/2;
    return rta;
}

void cargaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50])
{
    for(int i = 0; i < TAM; i++)
    {
        do
        {
            printf("Ingrese el legajo del alumno %d: ", i + 1);
            scanf("%d", &legajo[i]);
            if(legajo[i] < 1)
            {
                printf("El numero de legajo debe ser positivo\n");
            }
        } while(legajo[i] < 1);

        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(nombre[i]);

        do
        {
            printf("Ingrese la primer nota del alumno %d: ", i + 1);
            scanf("%d", &nota1[i]);
            if(nota1[i] < 1 || nota1[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota1[i] < 1 || nota1[i] > 10);

        do
        {
            printf("Ingrese la segunda nota del alumno %d: ", i + 1);
            scanf("%d", &nota2[i]);
            if(nota2[i] < 1 || nota2[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota2[i] < 1 || nota2[i] > 10);

        promedio[i]=calculapromedio(nota1[i],nota2[i]);
    }//FIN for(int i = 0; i < TAM; i++)
}
void ordenaVectores(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50])
{
    float aux_float;
    int aux_int;
    char aux_char[50];

    for(int i=0;i<TAM -1;i++)
    {
        for(int j=i+1;j<TAM ;j++)
        {
            if(promedio[i]<promedio[j])
            {// los muevo
                aux_float=promedio[i];
                promedio[i]=promedio[j];
                promedio[j]=aux_float;

                aux_int=nota1[i];
                nota1[i]=nota1[j];
                nota1[j]=aux_int;

                aux_int=nota2[i];
                nota2[i]=nota2[j];
                nota2[j]=aux_int;

                strcpy(aux_char,nombre[i]);
                strcpy(nombre[i],nombre[j]);
                strcpy(nombre[j],aux_char);
            } //FIN if(promedio[i]<promedio[j])
        }
    }
}

void mostrar_resultado(int legajo[],int nota1[],int nota2[],float promedio[], char nombre[][50])
{
    printf("\n---------------------------------------\n");
    printf("LEGAJO%cNOMBRE%cNOTA 1%cNOTA 2%cPROMEDIO\n", TAB, TAB, TAB);
    printf("---------------------------------------\n");

    for(int i = 0; i < 3; i++)
    {
        printf("%d%c%s%c%d%c%d%c%f\n", legajo[i], TAB, nombre[i], TAB, nota1[i], TAB, nota2[i], TAB, promedio[i]);
    }
    printf("---------------------------------------\n");
}

/*int main()
{
    int legajo[TAM];
    int nota1[TAM];
    int nota2[TAM];
    float promedio[TAM];
    char nombre[TAM][50];
    int i;
    int j;
    float floatAuxiliar;
    int intAuxiliar;
    char charAuxiliar[50];

    for(i = 0; i < TAM; i++)
    {
        do
        {
            printf("Ingrese el legajo del alumno %d: ", i + 1);
            scanf("%d", &legajo[i]);
            if(legajo[i] < 1)
            {
                printf("El numero de legajo debe ser positivo\n");
            }
        } while(legajo[i] < 1);

        fflush(stdin);
        printf("Ingrese el nombre del alumno %d: ", i + 1);
        gets(nombre[i]);

        do
        {
            printf("Ingrese la primer nota del alumno %d: ", i + 1);
            scanf("%d", &nota1[i]);
            if(nota1[i] < 1 || nota1[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota1[i] < 1 || nota1[i] > 10);

        do
        {
            printf("Ingrese la segunda nota del alumno %d: ", i + 1);
            scanf("%d", &nota2[i]);
            if(nota2[i] < 1 || nota2[i] > 10)
            {
                printf("La nota debe estar comprendida entre 1 y 10\n");
            }
        } while(nota2[i] < 1 || nota2[i] > 10);

        promedio[i] = (float)(nota1[i] + nota2[i]) / 2;
    }

    printf("\nVectores segun orden de carga\n");
    printf("---------------------------------------\n");
    printf("LEGAJO%cNOMBRE%cNOTA 1%cNOTA 2%cPROMEDIO\n", TAB, TAB, TAB, TAB);
    printf("---------------------------------------\n");

    for(i = 0; i < 3; i++)
    {
        printf("%d%c%s%c%d%c%d%c%f\n", legajo[i], TAB, nombre[i], TAB, nota1[i], TAB, nota2[i], TAB, promedio[i]);
    }
    printf("---------------------------------------\n");

    //Ordeno por promedio descendente
    for(i = 0; i < TAM - 1; i++)
    {
        for(j = i + 1; j < TAM; j++)
        {
            if(promedio[i] < promedio[j])
            {
                floatAuxiliar = promedio[i];
                promedio[i] = promedio[j];
                promedio[j] = floatAuxiliar;

                intAuxiliar = legajo[i];
                legajo[i] = legajo[j];
                legajo[j] = intAuxiliar;

                intAuxiliar = nota1[i];
                nota1[i] = nota1[j];
                nota1[j] = intAuxiliar;

                intAuxiliar = nota2[i];
                nota2[i] = nota2[j];
                nota2[j] = intAuxiliar;

                strcpy(charAuxiliar, nombre[i]);
                strcpy(nombre[i], nombre[j]);
                strcpy(nombre[j], charAuxiliar);
            }
        }
    }

    printf("\nVectores ordenados por promedio descendente\n");
    printf("---------------------------------------\n");
    printf("LEGAJO%cNOMBRE%cNOTA 1%cNOTA 2%cPROMEDIO\n", TAB, TAB, TAB, TAB);
    printf("---------------------------------------\n");

    for(i = 0; i < TAM; i++)
    {
        printf("%d%c%s%c%d%c%d%c%f\n", legajo[i], TAB, nombre[i], TAB, nota1[i], TAB, nota2[i], TAB, promedio[i]);
    }
    printf("---------------------------------------\n");

    return 0;
}
*/
