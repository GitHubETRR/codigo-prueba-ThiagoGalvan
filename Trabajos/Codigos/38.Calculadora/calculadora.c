/*38. Desarrollar  un  algoritmo  que  ingrese  dos  números  y  luego  un  carácter  que  indique  una 
operación  (S-Suma,  R-Resta,  M-Multiplicación,  D-División)  y  luego  realice  la  operación 
correspondiente, tener en cuenta que no se pueden realizar divisiones por cero.*/
#include <stdio.h>

void Bienvenida(void);
char Menu(int[]);
void Sumar(int[]);
void Resta(int[]);
void Division(int[]);
void Multiplicacion(int[]);
int Continuar(void);


int main(){   
    int continuar;
    int num[2];
    char op;
    Bienvenida();
    op=Menu(num);
    
    switch (op){
    case 'S':
        Sumar(num);
        break;
    
    case 'R':
        Resta(num);
        break;
    
    case 'M':
        Multiplicacion(num);
        break;
    
    case 'D':
        Division(num);
        break;    
    
    default:
        break;
    }
}




void Bienvenida(void){

    printf("En este programa va a poder ingresar dos numeros y elegir que operacion matematica realizar\n");
}
char Menu (int num[]){
    char op;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num[1]);
    printf("Ingrese la operacion que desea realizar:\n");
    printf("S-Suma\n");
    printf("R-Resta\n");
    printf("M-Multiplicacion\n");
    printf("D-Division\n");
    scanf(" %c",&op);
    return op;
}

void Sumar (int num[]){
    int suma;
    suma=num[0]+num[1];
    printf("La suma de los dos numeros es: %d\n",suma);
}

void Resta (int num[]){
    int resta;
    resta=num[0]-num[1];
    printf("La resta de los dos numeros es: %d\n",resta);
}

void Division (int num[]){
    int division;
    if (num[1]!=0){
        division=num[0]/num[1];
        printf("La division de los dos numeros es: %d\n",division);
    }else{
        do{
            printf("No se puede dividir por 0\n");
            printf("Ingrese un valor distinto de 0\n");
            scanf("%d",&num[1]);
        } while (num[1]==0);
        division=num[0]/num[1];
        printf("La division de los dos numeros es: %d\n",division);
    }
    printf("La division de los dos numeros es: %d\n",division);
}

void Multiplicacion (int num[]){
    int multiplicacion;
    multiplicacion=num[0]*num[1];
    printf("La suma de los dos numeros es: %d\n",multiplicacion);
}

