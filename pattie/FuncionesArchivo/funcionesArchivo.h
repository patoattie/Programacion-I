#ifndef FUNCIONES_ARCHIVO_H_INCLUDED
#define FUNCIONES_ARCHIVO_H_INCLUDED

#define MODO_LECTURA_TEXTO "r"
#define MODO_ESCRITURA_TEXTO "w"
#define MODO_LECTURA_BINARIO "rb"
#define MODO_ESCRITURA_BINARIO "wb"

int abrirArchivo(FILE* punteroArchivo, const char* pathArchivo, const char* modoArchivo);
int validarModoArchivo(const char* modoArchivo);

#endif // FUNCIONES_ARCHIVO_H_INCLUDED
