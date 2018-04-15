#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED

/** \brief Pide el ingreso por teclado de un número al usuario, mostrandole un mensaje personalizado.
 *
 * \param char[] Mensaje a mostrar al usuario.
 * \return float El número ingresado por el usuario.
 *
 */
float pedirFlotante(char[]);

/** \brief Pide un número entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
int pedirEntero(char[], int, int);

/** \brief Pide un número entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
int validarEntero(int, int, int);

/** \brief Pide un número flotante al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
float validarFlotante(float, float, float);

/** \brief Pide un número doble al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
double pedirDoble(char[], double, double);

/** \brief Pide un número doble al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
double validarDoble(double, double, double);

/** \brief Pide un número entero largo al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
long pedirLargo(char[], long, long);

/** \brief Pide un número entero largo al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor mínimo del intervalo de validación
 * \param Valor máximo del intervalo de validación
 * \return El número ingresado por el usuario validado
 *
 */
long validarLargo(long, long, long);

/** \brief Calcula la suma de dos números.
 *
 * \param float Primer término de la suma.
 * \param float Segundo término de la suma.
 * \return float Resultado de la suma de ambos términos.
 *
 */
float calcularSuma(float, float);

/** \brief Calcula la resta de dos números.
 *
 * \param float Primer término de la resta.
 * \param float Segundo término de la resta.
 * \return float Resultado de la resta de ambos términos.
 *
 */
float calcularResta(float, float);

/** \brief Calcula la división de dos números.
 *
 * \param float Primer término de la división.
 * \param float Segundo término de la división.
 * \return float Resultado de la división de ambos términos.
 *
 */
float calcularCociente(float, float);

/** \brief Valida los dos términos de una división.
 *         Devuelve error si el segundo término de la división (o divisor) es cero.
 *         Si el primer término (o dividendo) también es cero especifica en el error que se trata de una indeterminación.
 *
 * \param float Primer término de la división.
 * \param float Segundo término de la división.
 * \return int Resultado de la validación:
 *             0 -> Validación OK.
 *             1 -> ERROR. División por cero sin indeterminación.
 *             2 -> ERROR. División por cero con indeterminación.
 *
 */
int validarCociente(float, float);

/** \brief Calcula la multiplicación de dos números.
 *
 * \param float Primer término de la multiplicación.
 * \param float Segundo término de la multiplicación.
 * \return float Resultado de la multiplicación de ambos términos.
 *
 */
float calcularProducto(float, float);

/** \brief Calcula el factorial de un número.
 *
 * \param float Número al cual se le va a calcular el factorial.
 * \return int Factorial del número ingresado por parámetro.
 *
 */
int calcularFactorial(float);

/** \brief Valida si es posible calcular el factorial de un número.
 *         Devuelve error para los casos en que el número es negativo o no es entero.
 *
 * \param float Número que se va a validar para la operación factorial.
 * \return int Resultado de la validación:
 *             0 -> Validación OK.
 *             1 -> ERROR. Factorial de número decimal.
 *             2 -> ERROR. Factorial de número negativo.
 *
 */
int validarFactorial(float);

/** \brief Llama a la rutina de Windows que limpia la pantalla de la consola.
 *
 * \param void
 * \return void
 *
 */
void limpiarPantalla(void);

/** \brief Valida si un número pasado por parámetro es entero o decimal.
 *
 * \param float Número que se va a validar.
 * \return int Resultado de la validación:
 *             0 -> El número es entero.
 *             1 -> El número es decimal.
 *
 */
int validarEnteroDecimal(float);

/** \brief --> Qué hace la función, por ejemplo "Permite sumar dos números enteros".
 *
 * \param --> Primer número a sumar
 * \param --> Segundo número a sumar
 * \return --> El resultado de la suma de los números
 *
 */
int sumarNumeros (int, int);

void mostrarVector(int[], int);
void cargarVector(int[], int);
void ordenarVectorMayorMenor(int[], int);
void ordenarVectorMenorMayor(int[], int);
int buscarMaximo(int[], int);
int buscarMinimo(int[], int);
void transformarApellidoNombre(const char[], const char[], char[]);

#endif // FUNCIONES_H_INCLUDED
