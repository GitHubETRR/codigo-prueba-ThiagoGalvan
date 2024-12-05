/*35. Desarrollar un algoritmo que ingrese un número entero de cuatro dígitos e indique con un 
mensaje si es capicúa.*/
#include <stdio.h>
int main(){
    int numero,cifra1,cifra2,cifra3,cifra4,redo;
    printf("En este programa va a poder ingresar un numero de 4 digitos y le va a decir si es capicua o no\n");
    
    do{
        printf("Ingrese su numero en el formato XXXX\n");
        scanf("%d",&numero);
        cifra1=numero/1000;
        cifra2=(numero/100)%10;
        cifra3=(numero%100)/10;
        cifra4=numero%10;
        if (cifra1==cifra4 && cifra2==cifra3){
            printf("El numero %d es capicua\n",numero);
            printf("Quiere probar con otro numero?\n");
            printf("(1)Si\n");
            printf("(0)No\n");
            scanf("%d",&redo);
        }
        else{
            printf("El numero %d no es capicua\n",numero);
            printf("Quiere probar con otro numero?\n");
            printf("(1)Si\n");
            printf("(0)No\n");
            scanf("%d",&redo);
        }
        
    } while (1==redo);
}