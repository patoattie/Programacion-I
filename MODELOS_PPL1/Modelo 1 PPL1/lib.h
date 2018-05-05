#ifndef LIB_H_INCLUDED
#define LIB_H_INCLUDED

#define LIM_USUARIOS 100
#define LIM_PRODUCTOS 1000

#define TAM_NOMBRE 50
#define TAM_CLAVE 20

//Definici�n de Estructuras
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

//Definici�n de funciones de la entidad Usuario
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

//Definici�n de funciones de la entidad Producto
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

//Definici�n de funciones generales
/** \brief Pide un n�mero entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor m�nimo del intervalo de validaci�n
 * \param Valor m�ximo del intervalo de validaci�n
 * \return El n�mero ingresado por el usuario validado
 *
 */
int pedirEntero(char[], int, int);

/** \brief Pide un n�mero entero al usuario y lo valida
 *
 * \param Mensaje a mostrar al usuario
 * \param Valor m�nimo del intervalo de validaci�n
 * \param Valor m�ximo del intervalo de validaci�n
 * \return El n�mero ingresado por el usuario validado
 *
 */
int validarEntero(int, int, int);

/** \brief Pide un n�mero entero al usuario
 *
 * \param Mensaje a mostrar al usuario
 * \return El n�mero ingresado por el usuario
 *
 */
int pedirEnteroSinValidar(char[]);

/** \brief Pide una cadena de caracteres al usuario validando que no supere el tama�o definido
 *         para evitar desbordamiento
 *
 * \param char[] Mensaje a mostrar al usuario
 * \param char[] La cadena ingresada por el usuario y validada
 * \param int Longitud m�xima de la cadena de caracteres
 * \return void
 *
 */
void pedirString(char[], char[], int);

/** \brief Valida que una cadena de caracteres no supere el tama�o definido para evitar desbordamiento
 *
 * \param char[] La cadena ingresada por el usuario
 * \param int Longitud m�xima de la cadena de caracteres
 * \return void
 *
 */
void validarString(char[], int);

/** \brief Calcula la divisi�n de dos n�meros.
 *
 * \param float Primer t�rmino de la divisi�n.
 * \param float Segundo t�rmino de la divisi�n.
 * \return float Resultado de la divisi�n de ambos t�rminos.
 *
 */
float calcularCociente(float, float);

/** \brief Valida los dos t�rminos de una divisi�n.
 *         Devuelve error si el segundo t�rmino de la divisi�n (o divisor) es cero.
 *         Si el primer t�rmino (o dividendo) tambi�n es cero especifica en el error que se trata de una indeterminaci�n.
 *
 * \param float Primer t�rmino de la divisi�n.
 * \param float Segundo t�rmino de la divisi�n.
 * \return int Resultado de la validaci�n:
 *             0 -> Validaci�n OK.
 *             1 -> ERROR. Divisi�n por cero sin indeterminaci�n.
 *             2 -> ERROR. Divisi�n por cero con indeterminaci�n.
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

/** \brief Llama a la rutina de Windows que pausa la ejecuci�n.
 *
 * \param void
 * \return void
 *
 */
void pausarEjecucion(void);

/** \brief Valida si un n�mero pasado por par�metro es entero o decimal.
 *
 * \param float N�mero que se va a validar.
 * \return int Resultado de la validaci�n:
 *             0 -> El n�mero es entero.
 *             1 -> El n�mero es decimal.
 *
 */
int validarEnteroDecimal(float);

/** \brief Pide un n�mero flotante al usuario
 *
 * \param Mensaje a mostrar al usuario
 * \return El n�mero ingresado por el usuario
 *
 */
float pedirFlotanteSinValidar(char[]);

#endif // LIB_H_INCLUDED
