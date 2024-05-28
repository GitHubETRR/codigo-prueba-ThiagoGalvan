//20. Dada una cantidad entera de segundos (menor a 86400) y conviértela en horas, minutos y 
//segundo utilizando los operadores de cociente y resto enteros. 
#include <stdio.h>

int main(){
    int seg_usuario,horas,minutos,segundos;
    printf("Con este programa va a saber cuantas horas,minutos y segundos equivalen a una cantidad de segundo que ingrese");
    printf("Ingrese la cantidad de segundo que quiere convertir:");
    scanf("%d",&seg_usuario);
    horas=seg_usuario/3600;
    minutos=(seg_usuario%3600)/60;
    segundos=(seg_usuario%3600)%60;
    printf("Hora:%d Minutos:%d Segundos:%d",horas,minutos,segundos);
    return 0;
}