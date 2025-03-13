/*28. Realizar un programa que devuelva la raíces de un polinomio de 2do grado ingresado los 
coeficientes a,b y c.*/
#include <stdio.h>
#include <math.h>

int main(){
    float a,b,c,x1,x2;
    int continuar;
    printf("En este programa va a poder calcular las raices de un polinomio de 2do grado\n");
    do{
        printf("Coeficiente a:\n");
        scanf("%f",&a);
        printf("Coeficiente b:\n");
        scanf("%f",&b);
        printf("Coeficiente c:\n");
        scanf("%f",&c);
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
        x2=(-b-sqrt(b*b-4*a*c))/(2*a);
        printf("X1=%f X2=%f\n",x1,x2);
        printf("Quiere calcular otras raices?\n");
        printf("(0)No\n");
        printf("(1)Si\n");
        scanf("%d",&continuar);
    } while (1==continuar);
    return 0;    
} 