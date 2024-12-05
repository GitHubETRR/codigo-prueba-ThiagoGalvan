/*50. Desarrollar un algoritmo que ingrese un número entero positivo y muestre por pantalla todos 
sus divisores.*/ 

#include <stdio.h>

int main(){
    int i,num;
    
    printf("Ingrese un número entero positivo: ");
    scanf("%d", &num);
    if (num>0){
        for (i=1;i<num+1;i++){
            if (num%i==0){
                printf("Los divisores de %d son: %d\n",num,i);
            }
        }
    }else("Su numero no es positivo\n");
    return 0;
}