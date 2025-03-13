/*45. Desarrollar un algoritmo que ingrese 10 números enteros y muestre por pantalla un mensaje 
únicamente cuando son positivos.*/

#include <stdio.h>

int main(){
    int num, i;
    for (i = 0; i < 10; i++) {
        printf("Ingrese el número %d:",i+1);
        scanf("%d", &num);
        if (num > 0) {
            printf("El número %d es positivo.\n\n",num);
        }else{
            printf("El número %d es negativo.\n\n",num);    
        }
    }
}