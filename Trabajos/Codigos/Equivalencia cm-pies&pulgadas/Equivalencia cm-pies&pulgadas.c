//Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo 
//flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas.

#include <stdio.h>

int main(){
    float cm,pulgadas;
    int pies;
    printf("Introduce la cantidad de centímetros: \n");
    pies=cm/30.48;
    pulgadas=(cm/2.54);
    printf("La equivalencia en pies es de %d y en pulgadas es de %f",pies,pulgadas);
    return 0;
}