    float numero1;
    float numero2;
    char operador;
    float resultado;
    char mensaje[80];

    printf("Ingrese número Uno: ");
    scanf("%f", &numero1);
    printf("Ingrese número Dos: ");
    scanf("%f", &numero2);

    while(operador != '+' && operador != '-' && operador != '*' && operador != '/')
    {
        printf("Ingrese operador (+; -; *; /)");
        operador = getche();
        printf("\n");
    }

    if(operador == '/' && numero2 == 0)
    {
        printf("\nERROR: El divisor no puede ser cero");
    }
    else
    {
        switch(operador)
        {
        case '+':
            strcpy(mensaje, "La Suma es ");
            resultado = numero1 + numero2;
            break;
        case '-':
            strcpy(mensaje, "La Resta es ");
            resultado = numero1 - numero2;
            break;
        case '*':
            strcpy(mensaje, "El Producto es ");
            resultado = numero1 * numero2;
            break;
        case '/':
            strcpy(mensaje, "El Cociente es ");
            resultado = numero1 / numero2;
            break;
        }

        printf("%s %f", mensaje, resultado);
    }
