//Construye un programa que pregunte los años que tienes y emita como respuesta el número 
//de días vividos.

#include <stdio.h>
int main(){
    int años,meses,dias,dias_vividos;
    printf("Para saber cuantos dias vivio ingrese\n");
    printf("Años vividos: \n");
    scanf("%d",&años);
    printf("Meses vividos: \n");
    scanf("%d",&meses);
    printf("Dias vividos: \n");
    scanf("%d",&dias);
    dias_vividos = años*365+meses*30+dias;
    printf("Vivio %d dias",dias_vividos);
    return 0;
}
