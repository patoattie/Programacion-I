#ifndef FUNCIONES_ARCHIVO_H_INCLUDED
#define FUNCIONES_ARCHIVO_H_INCLUDED

#define MODO_LECTURA_TEXTO "r"
#define MODO_ESCRITURA_TEXTO "w"
#define MODO_LECTURA_BINARIO "rb"
#define MODO_ESCRITURA_BINARIO "wb"

int abrirArchivo(FILE* punteroArchivo, const char* pathArchivo, const char* modoArchivo);
int validarModoArchivo(const char* modoArchivo);
int cerrarArchivo(FILE* punteroArchivo);
int escribirArchivoTexto(const char* texto, FILE* punteroArchivo, int* huboError);
int leerArchivoTexto(char* texto, FILE* punteroArchivo, int longitudCadena, int* huboError, int* finArchivo);

#endif // FUNCIONES_ARCHIVO_H_INCLUDED
