//21. Dada una fecha en el formato DDMMAAAA y separarlo en Dia, month y Año utilizando 
//operaciones aritméticas.

#include <stdio.h>

int main(){
    int DDMMAAAA,days,month,year,bisiesto;
    printf("En este programa al ingresar una fecha en el formato DDMMAAAA se va a poder separar en Dia, mes y Anio\n");
    printf("Ingrese la fecha a convertir(DDMMAAAA):\n");
    scanf("%d",&DDMMAAAA);
    
    year=DDMMAAAA%10000;
    month=(DDMMAAAA/10000)%100;
    days=DDMMAAAA/1000000;
    
    if(days>30 && (4==month||6==month||9==month||11==month)){
        printf("El mes que ingreso no tiene mas 31 dias");
    }
    else if (2==month && 29<days)
    {
        bisiesto=year%4;
        if(bisiesto==0)
        {
            printf("Año:%d Mes:%d Dia:%d",year,month,days);
        }else
        {
            printf("El anio no es bisiesto por lo que febrero no tiene 29 dias");
        }
    }else if(days>31 && (1==month || 3==month || 5==month || 7==month || 8==month ||10==month || 12==month)){
        printf("El mes que ingreso no tiene mas de 31 dias ");}
        else{
            printf("Anio:%d Mes:%d Dia:%d",year,month,days);
        }
    return 0;
    }

