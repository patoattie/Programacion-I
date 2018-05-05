#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#define LIM_USUARIOS 100
#define LIM_PRODUCTOS 1000

#define TAM_NOMBRE 50
#define TAM_CLAVE 20

//Definición de Estructuras
typedef struct
{
    int id;
    char nombre[TAM_NOMBRE];
    char clave[TAM_CLAVE];
    int estado;
} eUsuario;

typedef struct
{
    int id;
    int idUsuario;
    char nombre[TAM_NOMBRE];
    float precio;
    int stock;
    int cantidadVendida;
    int estado;
} eProducto;

//Definición de funciones de la entidad Usuario
void eUsuario_init(eUsuario[], int limite);
int eUsuario_buscarPorId(eUsuario[], int limite, int id);
int eUsuario_siguienteId(eUsuario[], int limite);
int eUsuario_buscarLugarLibre(eUsuario[], int limite);

void eUsuario_mostrarUno(eUsuario parametro);
void eUsuario_mostrarUnoConClave(eUsuario parametro);
void eUsuario_mostrarUnoConEstado(eUsuario parametro);
int eUsuario_mostrarListado(eUsuario[], int limite);
int eUsuario_mostrarListadoConOcupados(eUsuario[], int limite);
int eUsuario_mostrarListadoConPublicaciones(eUsuario[], eProducto[], int limiteUsuarios, int limiteProductos);
int eUsuario_mostrarListadoConClave(eUsuario[], int limite);
int eUsuario_tienePublicaciones(eProducto[], int limite, int idUsuario);

int eUsuario_alta(eUsuario[], int limite);
int eUsuario_baja(eUsuario[], int limite);
int eUsuario_modificacion(eUsuario[], int limite);

//Definición de funciones de la entidad Producto
void eProducto_init(eProducto[], int limite);
int eProducto_buscarPorId(eProducto[], int limite, int id);
int eProducto_siguienteId(eProducto[], int limite);
int eProducto_buscarLugarLibre(eProducto[], int limite);

void eProducto_mostrarUno(eProducto parametro);
void eProducto_mostrarUnoConEstado(eProducto parametro);
void eProducto_mostrarUnoConUsuario(eProducto parametro, char nombreUsuario[]);
int eProducto_mostrarListado(eProducto[], int limite);
int eProducto_mostrarListadoConOcupados(eProducto[], int limite);
int eProducto_mostrarListadoPorUsuario(eProducto[], int limite, int idUsuario, char nombreUsuario[]);

int eProducto_alta(eProducto[], int limite, int idUsuario, char nombreUsuario[]);
int eProducto_publicar(eProducto listaProductos[], eUsuario listaUsuarios[], int limiteProductos, int limiteUsuarios);
int eProducto_baja(eProducto[], int limite);
int eProducto_modificacion(eProducto[], int limite, int idUsuario, char nombreUsuario[]);
int ePublicacion_modificar(eProducto[], eUsuario[], int limiteProductos, int limiteUsuarios);

//Definición de funciones generales
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

/** \brief Pide un número flotante al usuario
 *
 * \param Mensaje a mostrar al usuario
 * \return El número ingresado por el usuario
 *
 */
float pedirFlotanteSinValidar(char[]);

#endif // LIB_H_INCLUDED
