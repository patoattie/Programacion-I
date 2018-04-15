#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/*
se ingresan nros (distinto de 0) y no se sabe cuantos
informar
1) cant de pares e impares
2) % de positivos y negativos
3) maximo y minimo
4) maximo numero par
*/

int main()
{
    int numeroIngresado;
    char respuesta = 'a';
    int cantPares = 0;
    int cantImpares = 0;
    int cantPositivos = 0;
    int cantNegativos = 0;
    int cantTotal = 0;
    float porcentajePositivos;
    float porcentajeNegativos;
    int maximo;
    int minimo;
    int maximoPar;

    while((respuesta != 'n') && (respuesta != 'N'))
    {
        printf("Ingrese un numero distinto de cero: ");
        scanf("%d", &numeroIngresado);

            //Verifico pares e impares, y maximo par
            if(numeroIngresado != 0 && numeroIngresado % 2 == 0)
            {
                cantPares++;
                if(numeroIngresado > maximoPar)
                {
                    maximoPar = numeroIngresado;
                }
            }
            else
            {
                if(numeroIngresado != 0)
                {
                    cantImpares++;
                }
            }

            //Verifico positivos y negativos
            if(numeroIngresado > 0)
            {
                cantPositivos++;
            }
            else
            {
                cantNegativos++;
            }

            //verifico maximo y minimo
            if(numeroIngresado > maximo || cantTotal == 0)
            {
                maximo = numeroIngresado;
            }
            if(numeroIngresado < minimo || cantTotal == 0)
            {
                minimo = numeroIngresado;
            }

            //Acumulo total ingresado
            cantTotal++;

            //Pido confirmacion al usuario
            printf("Continua la carga (S/N): ");
            respuesta = getche();
            printf("\n");
    }
    //Calculo porcentajes
    porcentajeNegativos = (cantNegativos / cantTotal) * 100.0;
    porcentajePositivos = (cantPositivos / cantTotal) * 100.0;

    //Retorno los resultados
    printf("Cantidad de pares: %d", cantPares);
    printf("\nCantidad de impares: %d", cantImpares);
    printf("\nPorcentaje de positivos: %f", porcentajePositivos);
    printf("\nPorcentaje de negativos: %f", porcentajeNegativos);
    printf("\nNumero maximo: %d", maximo);
    printf("\nNumero minimo: %d", minimo);
    printf("\nMaximo numero par: %d", maximoPar);

    return 0;
}
