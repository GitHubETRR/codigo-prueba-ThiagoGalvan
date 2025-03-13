/*Desarrollar un algoritmo que calcule y visualice en pantalla una tabla con las 20 primeras 
potencias de 2.*/

#include <stdio.h>
#include <math.h>

int main(){
    int i, potencia, resultado;
    
    for (i = 0; i <= 20; i++) {
        resultado=pow(2,i);
        printf("Pot %d de 2=%d\n",i,resultado);
    }
}