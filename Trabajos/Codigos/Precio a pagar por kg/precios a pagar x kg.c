//Construye un programa que dados el valor de 1 kg de determinada mercadería y la cantidad 
//mercadería comprada, emite el valor del total a pagar.  

#include <stdio.h>

int main(){
    float Precioxkg,MercaderiaComprada,Precio;
    printf("Ingrese el valor que tiene 1kg:\n");
    scanf("%f",&Precioxkg);
    printf("Cuanta mercaderia va a comprar (kg):\n");
    scanf("%f",&MercaderiaComprada);
    Precio=Precioxkg*MercaderiaComprada;
    printf("El total a pagar es de %f",Precio);
    return 0;
}
