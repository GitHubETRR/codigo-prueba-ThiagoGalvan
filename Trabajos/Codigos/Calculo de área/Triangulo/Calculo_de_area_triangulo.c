#include <stdio.h>

int main(){
    
    int cateto_a=0;
    int cateto_b=0;
    
    printf("En este programa va a poder calcular el area de su triangulo\n");
    printf("Ingrese el cateto A de su triangulo:\n");
    scanf("%d",&cateto_a);
    printf("Ingrese el cateto B de su triangulo:\n");
    scanf("%d",&cateto_b);
    printf("El area de su triangulo es: %d",(cateto_b*cateto_a)/2);
    return 0;
}
