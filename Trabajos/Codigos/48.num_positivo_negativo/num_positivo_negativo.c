/*48. Desarrollar  un  algoritmo  que  ingrese  números  hasta  leer  un  cero,  calcular  y  mostrar  por 
pantalla cuántos de ellos son negativos y cuántos son positivos.*/
#include <stdio.h>
int main(){
    int num,negativos,positivos;
    printf("Ingrese un numero\n");
    scanf("%d",&num);
    while (num!=0){
        printf("Ingrese un numero\n");
        scanf("%d",&num);
        if (num>0){
            positivos++;
        }
        else{
            negativos++;
        } 
    }
    printf("%d son positivos y %d son negativos",positivos,negativos);
}