//22. Desarrollar un algoritmo que permita leer un valor que represente una temperatura expresada 
//en grados Celsius y convierta dicho valor en un valor expresado en grados Fahrenheit. 
#include <stdio.h>
int main(){
    float celsius,farenheit;
    printf("En este programa va a poder convertir un valor de grados Celsius a grados Farenheit\n");
    printf("Ingrese sus grados Celsius:\n");
    scanf("%f",&celsius);
    farenheit=celsius*9/5+32;
    printf("Equivale a %f grados Farenheit",farenheit);
    return 0;
}