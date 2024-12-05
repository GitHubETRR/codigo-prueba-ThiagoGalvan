/*25. Una empresa paga sueldos calculando el valor del sueldo básico por la cantidad de horas 
trabajadas y un plus por antigüedad que corresponde al 2% por cada año trabajado. El sueldo 
básico es de $4500. Se desea ingresar la cantidad de horas trabajadas, la antigüedad y 
obtener el sueldo neto.*/

#include <stdio.h>
int main(){
    int sueldo,horas,antiguedad,continuar,sueldo_neto,plus;
    printf("En este programa va a poder calcular el sueldo neto que recibira, teniendo en cuenta las horas trabajadas y años de antiguedad en la empresa\n");
    do{
        printf("Ingrese las horas que trabajo:");
        scanf("%d",&horas);
        printf("\nIngrese sus anios de antiguedad:");
        scanf("%d",&antiguedad);
        if (0<=horas||0<=antiguedad)
        {
            sueldo=4500*horas;
            plus=sueldo*.02*antiguedad;
            sueldo_neto=sueldo+plus;
            printf("Su sueldo es $%d\n",sueldo_neto);
            printf("Quiere calcular otro sueldo?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }else{
            printf("No puede ingresar valores negativos\n");
            printf("Quiere intentarlo de nuevo?\n");
            printf("(0)No\n");
            printf("(1)Si\n");
            scanf("%d",&continuar);
        }
    }while(1==continuar);
}
