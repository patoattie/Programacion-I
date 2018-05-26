#ifndef MONEDA_H_INCLUDED
#define MONEDA_H_INCLUDED

#define TAM_MONEDA 10
#define TAM_PAIS 10
#define TAM_ID 4

typedef struct
{
    char pais[10];
    int id;
    char nombre[10];
} eMoneda;

void eMoneda_mostrarUno(eMoneda* parametro);
int eMoneda_mostrarListado(eMoneda* listado, int limite);
int eMoneda_buscarLugarLibre(eMoneda* listado,int limite);
int eMoneda_buscarPorId(eMoneda* listado, int limite, int id);
int eMoneda_bajarArchivo(eMoneda* listado, int limite, const char* nombreArchivo);
void eMoneda_grabarUnoArchivo(eMoneda* parametro, FILE* archivo);
int eMoneda_alta(eMoneda* listado, int limite);
int eMoneda_baja(eMoneda* listado, int limite);

#endif // MONEDA_H_INCLUDED
