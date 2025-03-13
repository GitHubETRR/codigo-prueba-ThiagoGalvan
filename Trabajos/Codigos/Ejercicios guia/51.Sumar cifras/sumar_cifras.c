/*51. Desarrollar un algoritmo que ingrese un entero positivo, y muestre por pantalla la suma de sus 
cifras.*/
#include <stdio.h>
int main(){
    int num,suma=0;
    printf("En este programa va a poder ingresar un numero y saber la suma de sus cifras\n");
    printf("Ingrese su numero:\n");
    scanf("%d",&num);
    while(num!=0){
        suma+=num%10;
        num/=10;
    }   
    printf("La suma de las cifras de su numero es: %d\n",suma);
}
