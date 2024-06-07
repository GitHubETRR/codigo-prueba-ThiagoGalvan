//23. Desarrollar un algoritmo que permita calcular el área de un triángulo en función de las 
//longitudes de sus lados previamente leídos desde el teclado.
#include <stdio.h>
#include <math.h>
int main (){
    float area, semi_perimetro, lado_a, lado_b, lado_c;
    printf("En este programa va a pdoer calcular el area de un triangulo ingresando las medidas de sus tres lados\n");
    printf("Ingrese las medidas de sus lado\n");
    printf("Lado A:\n");
    scanf("%f",&lado_a);
    printf("Lado B:\n");
    scanf("%f",&lado_b);
    printf("Lado C:\n");
    scanf("%f",&lado_c);
    semi_perimetro=(lado_a+lado_b+lado_c)/2;
    area=sqrt(semi_perimetro*(semi_perimetro-lado_a)*(semi_perimetro-lado_b)*(semi_perimetro-lado_c));
    printf("El area del triangulo es %f unidades cuadradas",area);
    return 0;
}