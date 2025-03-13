/*46. Desarrollar un algoritmo que, ingrese un número entero entre 0 y 10 (validar este valor) y 
muestre por pantalla la tabla de multiplicar del número ingresado*/

#include <stdio.h>

int main(){
    int num,i,multiplicar;
    printf("Ingrese un número entero entre 0 y 10: ");
    scanf("%d",&num);
    while(num<0 || num>10){
        printf("Error, ingrese un número entero entre 0 y 10: ");
        scanf("%d",&num);
    }
    for(i=1;i<=10;i++){
        multiplicar=num*i;
        printf("%d x %d = %d\n",num,i,multiplicar);
    }
}