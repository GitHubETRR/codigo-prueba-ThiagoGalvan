//15. Construye un programa que permita ingresar las medidas de los lados de un rectángulo; el 
//mismo debe emitir por pantalla su superficie y su perímetro.

#include <stdio.h>

int main(){
    float lado1,lado2,superficie,perimetro;
    printf("En este programa va a poder calcular la superficie y el perimetro de su rectangulo\n");
    printf("Ingrese la medida(cm) de su primer lado:\n");
    scanf("%f",&lado1);
    printf("Ingrese la medida(cm) se su segundo lado\n");
    scanf("%f",&lado2);
    superficie=lado1*lado2;
    perimetro=lado1*2+lado2*2;
    printf("La superficie de su rectangulo es:%.2f\n",superficie);
    printf("El perimetro de su rectangulo es de: %.2fcm",perimetro);
    return 0;
}