//14. Construye un programa que permita ingresar los valores de 2 de los ángulos interiores de un 
//triángulo, y se emita por pantalla el valor del restante
#include <stdio.h>

int main(){
    float ang1, ang2,ang_res;
    printf("Ingrese el valor del primer ángulo interior: ");
    scanf("%f", &ang1);
    printf("Ingrese el valor del segundo ángulo interior: ");
    scanf("%f", &ang2);
    ang_res = 180 - (ang1 + ang2);
    if (ang_res>0 & ang_res<180)
    {
        printf("El angulo restante es:%.2f",ang_res);
    }
    else
    {
        printf("Sus angulos no pueden formar un triangulo");
    }
    return 0;
}