#ifndef USUARIOS_H_INCLUDED
#define USUARIOS_H_INCLUDED

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

int altaUsuario(eUsuario[], int);
int bajaUsuario(eUsuario[], int);
int modificarUsuario(eUsuario[], int);
int listarUsuarios(eUsuario[], int);

#endif // USUARIOS_H_INCLUDED
