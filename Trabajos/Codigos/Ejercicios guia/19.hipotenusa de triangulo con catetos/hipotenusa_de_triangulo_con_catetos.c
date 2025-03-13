//19. Determinar la hipotenusa de un triángulo rectángulo conocidas las longitudes de sus dos 
//catetos. Desarrollar los correspondientes algoritmos.

#include<stdio.h>
#include<math.h>

int main(){
    float cat_a,cat_b,hip;
    printf("En este programa va a poder calcular la hipotenusa de un triangulo rectangulo ingresando la medida de sus catetos\n");
    printf("Ingrese la medida de su primer cateto:\n");
    scanf("%f",&cat_a);
    printf("Ingrese la medida de su segundo cateto:");
    scanf("%f",&cat_b);
    hip=sqrt(cat_a*cat_a+cat_b*cat_b);
    printf("La hipotenusa de su triangulo rectangulo mide %f unidades",hip);
    getchar();
    getchar();
    return 0;
}