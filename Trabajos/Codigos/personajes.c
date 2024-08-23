#include <stdio.h>
#define MAX_CHAR 5O;


typedef struct{
    char nombre[MAX_CHAR];
    float resistencia;
    float resistencia_fuego;
    float resistencia_elec;
    float vida;
    float fuerza;
    float velocidad;
    int edad;
    int iq;
    char franquicia[];
}personaje_t;

//Batman
personaje_t batman = {"Batman", 100, 100, 100, 100,100,100,100,100,"DC"}
int main(){
    
}