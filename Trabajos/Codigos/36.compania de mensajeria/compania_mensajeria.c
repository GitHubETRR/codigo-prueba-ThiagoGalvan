/*Una compañía dedicada a servicio de mensajería realiza envios al interior el costo fijo de 
traslado es de $1500 si es corta distancia y 2000 si es larga distancia, luego dependerá del peso 
de la mercadería enviada, los de corta distancia si el peso supera los 20 kilos se le cobran $800 
por cada kilo de exceso y los de larga distancia se le cobra $800, cada 5 kilos excedidos. 
Desarrollar un algoritmo que ingrese el tipo de viaje y la cantidad de kilos y me devuelva el costo 
del viaje.*/

#include <stdio.h>
#define FIJO_CORTA 1500
#define FIJO_LARGA 2000
#define LIMITE_PESO 20
#define EXCESO 800

int main(){
    int tipo_viaje,redo;
    float peso,sobrepeso,costo;
    printf("En este programa va a poder calcular el costo del viaje al ingresar el tipo y la cantidad de kilos\n");
    do{
        printf("Que tipo de viaje va a hacer?\n");
        printf("Corto(1)\n");
        printf("Largo(2)\n");
        scanf("%d",&tipo_viaje);
        switch (tipo_viaje){
            case 1:
                printf("Ingrese la cantidad de kilos:\n");
                scanf("%f",&peso);
                if (peso>20){
                    sobrepeso=peso-20;
                    costo=FIJO_CORTA+sobrepeso*EXCESO;
                    printf("El costo de su viaje es de $%f\n",costo);
                }else{
                    printf("El costo de su vije es de $%d\n",FIJO_CORTA);
                }
                break;
            case 2:
                printf("Ingrese la cantidad de kilos:\n");
                scanf("%f",&peso);
                if (peso>20){
                    sobrepeso=peso-20;
                    costo=FIJO_LARGA+(sobrepeso/5)*EXCESO;
                    printf("El costo de su viaje es de $%f\n",costo);
                }else{
                    printf("El costo de su vije es de $%d\n",FIJO_LARGA);
                }
                break;
                
            default:
                printf("No eligio un viaje posible\n");
                break;
        }
        printf("Quiere probar otro viaje?\n");
            printf("(1)Si\n");
            printf("(0)No\n");
            scanf("%d",&redo);
    } while (1==redo);
}