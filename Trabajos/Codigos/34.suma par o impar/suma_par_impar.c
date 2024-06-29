/*34. Desarrolla un algoritmo que le permita leer dos valores A y B e indicar si la suma de los dos 
números es par.*/
#include <stdio.h>
int main(){
    int a,b,suma,par,redo;
    printf("En este programa va a poder sumar dos numero y saber si la suma de estos es par o impar\n");
    do{
        printf("Ingrese el primer numero: \n");
        scanf("%d",&a);
        printf("Ingrese el segundo numero: \n");
        scanf("%d",&b);
        suma=a+b;
        par=suma%2;
        if (par==0){
            printf("La suma de sus numero es %d y es par\n",suma);
            printf("Quiere probar otros dos numeros?\n");
            printf("(1)Si\n");
            printf("(0)No\n");
            scanf("%d",&redo);
        }
        else{
            printf("La suma de sus numero es %d y es impar\n",suma);
            printf("Quiere probar otros dos numeros?\n");
            printf("(1)Si\n");
            printf("(0)No\n");
            scanf("%d",&redo);
        }
    } while (redo==1);
}