#ifndef MONEDA_H_INCLUDED
#define MONEDA_H_INCLUDED

#define TAM_MONEDA 10
#define TAM_NOMBRE 10
#define TAM_PAIS 10

typedef struct
{
    char pais[10];
    int id;
    char nombre[10];
} eMoneda;

void eMoneda_mostrarUno(eMoneda* parametro);
int eMoneda_mostrarListado(eMoneda* lista, int limite);
int eMoneda_buscarLugarLibre(eMoneda* listado,int limite);
int eMoneda_buscarPorId(eMoneda* listado, int limite, int id);
int eMoneda_bajarArchivo(eMoneda* lista, int limite, char nombreArchivo[]);
void eMoneda_grabarUnoArchivo(eMoneda* parametro);
int eMoneda_alta(eMoneda* lista, int limite);
int eMoneda_baja(eMoneda* lista, int limite);

#endif // MONEDA_H_INCLUDED
