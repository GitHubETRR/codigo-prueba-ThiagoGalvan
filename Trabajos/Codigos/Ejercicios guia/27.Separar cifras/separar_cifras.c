//27. Dado un número entero de tres cifras mostrar sus cifras por separado
#include <stdio.h>
int main(){
    int numero,cifras,primera_cifra,segunda_cifra,tercera_cifra,continuar;
    printf("En este programa al ingresar un numero entero de tres cifras se las va a mostrar por separado\n");
    do{
        printf("Ingrese su numero:");
        scanf("%d",&numero);
        if (numero<999){
            primera_cifra=numero/100;
            segunda_cifra=(numero/10)%10;
            tercera_cifra=numero%10;
            printf("Primera cifra=%d Segunda cifra=%d Tercera cifra= %d\n",primera_cifra,segunda_cifra,tercera_cifra);
            printf("Quiere separar otro numero?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
        else{
            printf("Su numero tiene mas de tres cifras\n");
            printf("Quiere separar otro numero?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
    }while(1==continuar);
}


