//32. Desarrollar un algoritmo que ingrese un numero por teclado y luego indique si es par o impar.
#include <stdio.h>
int main(){
    int continuar,numero;
    printf("En este programa va a poder saber si un numero es par o impar\n");
    do
    {
        printf("Ingrese el numero:");
        scanf("%d",&numero);
        numero=numero%2;
        if (numero==0){
            printf("Su numero es par\n");
            printf("Quiere probar otro numero?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
        else{
            printf("Su numero es impar\n");
            printf("Quiere probar otro numero?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
        
    } while (1==continuar);
    
}