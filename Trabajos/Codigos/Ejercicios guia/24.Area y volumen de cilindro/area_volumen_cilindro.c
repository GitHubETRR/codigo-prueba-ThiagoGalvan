//24. Desarrollar un algoritmo que permita determinar el área y volumen de un cilindro cuyo radio 
//(r) y altura (h) se leen desde teclado. 
#include <stdio.h>
#define pi 3.14
int main(){
    float rad,altura,area,volumen;
    int continuar;
    printf("En este programa va a poder calcular el area y volumen de un cilindro ingresando su radio y altura\n");
    do{
        printf("Ingrese el radio:\n");
        scanf("%f",&rad);
        printf("Ingrese la altura\n");
        scanf("%f",&altura);
        area=2*pi*rad*altura+2*pi*rad*rad;
        volumen=pi*rad*rad*altura;
        printf("El area de se cilindro es de %f unidades cuadradas\n",area);
        printf("El volumen de su cilindro es de %f unidades cubicas\n",volumen);
        printf("¿Quiere calcular otro area y volumen?\n");
        printf("(0)No\n");
        printf("(1)Si\n");
        scanf("%d",&continuar);
    }while(continuar==1);
    return 0;
}