#include <stdio.h>
#include <conio.h>

int main() //Punto de entrada o entry point
{
    /* int -> Entero "%d" (mascara de entrada)
       float -> Real "%f"
       char -> Caracter "%c" */

    int numero1;
    float numero2;
    float resultado;
    char letra;
    //numero1 = 7;
    //numero2 = 23.6387;

    printf("Ingrese un numero entero: "); //El mensaje para que el usuario ingrese el dato se desdobla en un printf ya que el scanf no tiene parametro de mensaje.
    scanf("%d", &numero1); //& delante de la variable devuelve la dirección de memoria a la que apunta. Lo requiere scanf para guardar el dato.
    printf("Ingrese un numero flotante: ");
    scanf("%f", &numero2);
    printf("Ingrese una letra: ");
    /*
    Lectura de caracter con scanf (funcion general)
    fflush(stdin); //Vacio el buffer de teclado. Solo para Windows.
    scanf("%c", &letra);
    */
    /*
    Lectura de caracter con funcion especializada
       getche() hace echo al ingresar
       getch() NO hace echo al ingresar
    */
    letra = getche();
    //letra = getch();

    resultado = numero1 + numero2;

    system("cls"); //Limpia la pantalla

    printf("\nEl numero entero es: %d y el numero flotante es: %.2f\n", numero1, numero2); //\n \t secuencia de escape
    printf("%d + %f = %f\n", numero1, numero2, resultado);
    printf("La letra es: %c\n", letra);

    system("pause"); //Para frizar la ejecucion cuando se ejecuta directo desde el filesystem.

    return 0;
}
