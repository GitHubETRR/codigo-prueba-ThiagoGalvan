//26. Se ingresa un número entero positivo de dos o más cifras y obtener su última cifra
#include <stdio.h>
int main(){
    unsigned numero,cifra,continuar;
    printf("En este programa va a poder obtener la ultima cifra de un numero entero positivo de dos o mas cifras:");
    do
    {
        ("Ingrese el numero");
        scanf("%d",&numero);
        cifra=numero%10;
        printf("La ultima cifra de su numero es %d\n",cifra);
        printf("Quiere usar un numero distinto\n");
        printf("(0)No\n");
        printf("(1)Si\n");
        scanf("%d",&continuar);
    } while (1==continuar);
}