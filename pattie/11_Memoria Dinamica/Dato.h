typedef struct
{
    int a;
    char b[50];
}eDato;

//Setters
int eDato_set_a(eDato*, int);
int eDato_set_b(eDato*, char*);

//Getters
int eDato_get_a(eDato*);
char* eDato_get_b(eDato*);

//Constructores
eDato* new_eDato(void);
eDato* new_eDato_Parametros(int, char*);
