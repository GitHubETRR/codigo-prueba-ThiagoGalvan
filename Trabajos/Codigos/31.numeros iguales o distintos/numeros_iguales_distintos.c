/*31. Desarrollar un algoritmo que ingrese por consola dos números enteros, a continuación, indique 
si son iguales o distintos*/
#include <stdio.h>
int main(){
    float num1,num2;
    int continuar;
    printf("En este programa va a poder saber si dos numeros son iguales o distintos\n");
    do
    {
        printf("Ingrese el primer numero:\n");
        scanf("%f",&num1);
        printf("Ingrese el segundo numero:\n");
        scanf("%f",&num2);
        if (num1==num2){
            printf("Los numeros son iguales\n");
            printf("Quiere comparar otros dos numeros?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
        else
        {
            printf("Los numeros son distintos\n");
            printf("Quiere comparar otros dos numeros?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
        
    } while (1==continuar);
    
}