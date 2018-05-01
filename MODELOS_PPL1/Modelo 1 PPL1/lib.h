#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#define LIM_USUARIOS 100
#define TAM_NOMBRE 50
#define TAM_CLAVE 20

typedef struct
{
    int id;
    char nombre[TAM_NOMBRE];
    char clave[TAM_CLAVE];
    int calificacion;
    int estado;
} eUsuario;

int eUsuario_init(eUsuario[], int limite);
int eUsuario_buscarPorId(eUsuario[], int limite, int id);
int eUsuario_siguienteId(eUsuario[], int limite);
int eUsuario_buscarLugarLibre(eUsuario[], int limite);

void eUsuario_mostrarUno(eUsuario parametro);
void eUsuario_mostrarUnoConClave(eUsuario parametro);
void eUsuario_mostrarUnoConEstado(eUsuario parametro);
int eUsuario_mostrarListado(eUsuario[], int limite);
int eUsuario_mostrarListadoConOcupados(eUsuario[], int limite);

int eUsuario_alta(eUsuario[], int limite);
int eUsuario_baja(eUsuario[], int limite);
int eUsuario_modificacion(eUsuario[], int limite);

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

/** \brief Pide un número entero al usuario
 *
 * \param Mensaje a mostrar al usuario
 * \return El número ingresado por el usuario
 *
 */
int pedirEnteroSinValidar(char[]);

/** \brief Pide una cadena de caracteres al usuario validando que no supere el tamaño definido
 *         para evitar desbordamiento
 *
 * \param char[] Mensaje a mostrar al usuario
 * \param char[] La cadena ingresada por el usuario y validada
 * \param int Longitud máxima de la cadena de caracteres
 * \return void
 *
 */
void pedirString(char[], char[], int);

/** \brief Valida que una cadena de caracteres no supere el tamaño definido para evitar desbordamiento
 *
 * \param char[] La cadena ingresada por el usuario
 * \param int Longitud máxima de la cadena de caracteres
 * \return void
 *
 */
void validarString(char[], int);

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

/** \brief Llama a la rutina de Windows que limpia la pantalla de la consola.
 *
 * \param void
 * \return void
 *
 */
void limpiarPantalla(void);

/** \brief Llama a la rutina de Windows que pausa la ejecución.
 *
 * \param void
 * \return void
 *
 */
void pausarEjecucion(void);

/** \brief Valida si un número pasado por parámetro es entero o decimal.
 *
 * \param float Número que se va a validar.
 * \return int Resultado de la validación:
 *             0 -> El número es entero.
 *             1 -> El número es decimal.
 *
 */
int validarEnteroDecimal(float);

#endif // LIB_H_INCLUDED
