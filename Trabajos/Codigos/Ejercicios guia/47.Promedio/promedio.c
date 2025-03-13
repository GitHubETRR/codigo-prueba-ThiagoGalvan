/*47. Desarrollar un algoritmo que ingrese números hasta ingresar un número negativo, se pide 
mostrar por pantalla el promedio.*/

#include <stdio.h>
int main (){
    int num,prom,cant;
    printf("Ingrese un numero, ");
    scanf("%d",&num)
    while (num>0){
    prom+=num;
    cant++;
    printf("Ingrese un numero, ");
    scanf("%d",&num);
    }
    prom=prom/cant;
    printf("El promedio es: %d",prom);
}


