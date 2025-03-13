/*39. Desarrollar un algoritmo que ingrese nota entera (entre 1 y 10) de un alumno correspondiente 
al  promedio  obtenido,  se  pide  mostrar  el  siguiente  mensaje:  "El  alumno  obtuvo  un 
sobresaliente", según el promedio: 10-Sobresaliente, 8 y 9-Distinguido, 6 y 7-Bueno, 4 y 5-
Aprobado, 1,2,3-Reprobado.*/

#include <stdio.h>

int Bienvenida (void);
void Calificar(int);

int main (){
    int calificacion;
    calificacion=Bienvenida();
    Calificar(calificacion);
}

int Bienvenida (void){
    int nota;
    printf("En este programa va a poder saber cuan bueno es su promedio");
    printf("\nIngrese su promedio:");
    scanf("%d",&nota);
    if (nota>10||nota<1){
        do{
            printf("\nIngrese un promedio valido:");
            scanf("%d",&nota);
        } while (nota>10||nota<1);
    }
    return nota;
}
void Calificar(int nota){
    switch (nota){
    case 10:
        printf("El alumno obtuvo un sobresaliente");
        break;
    case 9:
    case 8:
        printf("El alumno obtuvo un distinguido ");
        break;
    case 7:
    case 6:
        printf("El alumno obtuvo un bueno ");
        break;
    case 5:
    case 4:
        printf("El alumno obtuvo un aprobado");
        break;
    case 3:
    case 2:
    case 1:
        printf("El alumno obtuvo un desaprobado");
        break;
    default:
        break;
    }
}

