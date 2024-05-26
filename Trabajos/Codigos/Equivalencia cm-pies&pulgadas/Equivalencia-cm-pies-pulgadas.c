//Desarrolla un algoritmo que permita, dados ciertos centímetros como entrada de tipo 
//flotante, emitir por pantalla su equivalencia en pies (enteros) y en pulgadas.

#include <stdio.h>

int main(){
    float cm,pulgadas;
    int pies;
    printf("Introduce la cantidad de centimetros:\n");
    scanf("%f",&cm);
    pulgadas=cm/2.54;
    pies=cm/30.48;
    printf("La equivalencia en pies es de %d y en pulgadas es de %f\n",pies,pulgadas);
    return 0;
}
