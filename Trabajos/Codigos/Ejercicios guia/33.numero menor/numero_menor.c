/*33. Desarrollar un algoritmo que Ingrese tres números e indique cuál es el menor, si los tres son 
iguales indicarlo con un mensaje.*/
#include <stdio.h>
int main (){
    int num1, num2, num3,continuar;
    printf("En este programa va a poder saber cual de tres numeros es el menor\n");
    do{
        printf("Ingrese el primer numero\n");
        scanf("%d",&num1);
        printf("Ingrese el segundo numero\n");
        scanf("%d",&num2);
        printf("Ingrese el tercer numero\n");
        scanf("%d",&num3);
        if (num1 == num2 && num2 == num3) {
            printf("Los tres numeros son iguales\n");
        } else if (num1 <= num2 && num1 <= num3) {
            printf("El numero mas chico es el %d\n", num1);
        } else if (num2 <= num1 && num2 <= num3) {
            printf("El numero mas chico es el %d\n", num2);
        } else {
            printf("El numero mas chico es el %d\n", num3);
        }
        printf("¿Quiere usar otros numeros?\n");
        printf("(0) No\n");
        printf("(1) Si\n");
        scanf("%d", &continuar);
        
    }while (1==continuar);
    
} 