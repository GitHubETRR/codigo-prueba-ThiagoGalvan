//18. Desarrollar un algoritmo que le permita leer un valor para el radio (R) y calcule el área (A) de 
//un círculo y emitir su valor. 

#include<stdio.h>

int main(){
    float radio,area;
    float const pi=3.14;
    printf("En este programa va a poder calcular el area de un circulo ingresando el radio\n");
    printf("Ingrese el radio de su circulo:");
    scanf("%f",&radio);
    area=pi*radio*radio;
    printf("El area de su circulo es %f",area);
    return 0;
}