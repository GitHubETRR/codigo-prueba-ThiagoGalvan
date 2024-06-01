//17. Construye un programa que permita ingresar 2 tiempos, expresados en horas, minutos y 
//segundos, el mismo debe emitir por pantalla la suma de ambos (también en horas, minutos y 
//segundos). 
#include <stdio.h>

int main(){
    unsigned int horas1,minutos1,segundos1,horas2,minutos2,segundos2,suma_horas,suma_minutos,suma_segundos;
    printf("En este programa va a poder sumar dos tiempos, con sus horas,minutos y segundos\n");

    printf("Ingrese los valores de su primer tiempo\n");
    printf("Hora:\n");
    scanf("%d",&horas1);
    printf("Minuto:\n");
    scanf("%d",&minutos1);
    printf("Segundos:\n");
    scanf("%d",&segundos1);

    printf("Ahora ingrese los valores de su segundo tiempo a sumar\n");
    printf("Hora:\n");
    scanf("%d",&horas2);
    printf("Minuto:\n");
    scanf("%d",&minutos2);
    printf("Segundos:\n");
    scanf("%d",&segundos2);

    suma_horas=horas1+horas2;
    suma_minutos=minutos1+minutos2;
    suma_segundos=segundos1+segundos2;

    if (suma_segundos>59)
    {
        suma_segundos= suma_segundos - 60;
        suma_minutos = suma_minutos + 1;
    }

    if (suma_minutos>59)
    {
        suma_minutos = suma_minutos - 60;
        suma_horas = suma_horas + 1;
    }

    
    printf("La suma de sus tiempo es \nHoras:%d \nMinutos:%d \nSegundos:%d",suma_horas,suma_minutos,suma_segundos);
    return 0;
}