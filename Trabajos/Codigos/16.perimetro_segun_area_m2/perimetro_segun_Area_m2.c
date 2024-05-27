//16. Construye un programa que permita ingresar la superficie de un cuadrado (en m2), el mismo 
//debe emitir por pantalla su perímetro. 
#include <stdio.h>
#include <math.h>

int main (){
    float m2,perimetro;
    printf("En este programa va a poder calcular el perimetro de su cuadrado ingresando su superficie(m2)\n");
    printf("Ingrese la superficie de su cuadrado:");
    scanf("%f",&m2);
    perimetro=sqrt(m2)*4;
    printf("El perimetro de su cuadrado es: %.2f",perimetro);
    return 0;
}

//falta revisar