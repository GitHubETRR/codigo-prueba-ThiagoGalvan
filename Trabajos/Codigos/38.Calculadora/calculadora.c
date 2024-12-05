/*38. Desarrollar  un  algoritmo  que  ingrese  dos  números  y  luego  un  carácter  que  indique  una 
operación  (S-Suma,  R-Resta,  M-Multiplicación,  D-División)  y  luego  realice  la  operación 
correspondiente, tener en cuenta que no se pueden realizar divisiones por cero.*/
#include <stdio.h>

void Bienvenida(void);
char Menu(float[]);
void Sumar(float[]);
void Resta(float[]);
void Division(float[]);
void Multiplicacion(float[]);
int Continuar(void);


int main(){   
    int continuar;
    float num[2];
    char op;
    Bienvenida();
    do{
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
        continuar=Continuar();
    } while (1==continuar);
}




void Bienvenida(void){
    printf("En este programa va a poder ingresar dos numeros y elegir que operacion matematica realizar\n");
}
char Menu (float num[]){
    char op;
    printf("Ingrese el primer numero: ");
    scanf("%f",&num[0]);
    printf("Ingrese el segundo numero: ");
    scanf("%f",&num[1]);
    printf("Ingrese la operacion que desea realizar:\n");
    printf("S-Suma\n");
    printf("R-Resta\n");
    printf("M-Multiplicacion\n");
    printf("D-Division\n");
    scanf(" %c",&op);
    return op;
}

void Sumar (float num[]){
    float suma;
    suma=num[0]+num[1];
    printf("La suma de los dos numeros es: %.2f\n",suma);
}

void Resta (float num[]){
    float resta;
    resta=num[0]-num[1];
    printf("La resta de los dos numeros es: %.2f\n",resta);
}

void Division (float num[]){
    float division;
    if (num[1]!=0){
        division=num[0]/num[1];
        printf("La division de los dos numeros es: %.2f\n",division);
    }else{
        do{
            printf("No se puede dividir por 0\n");
            printf("Ingrese un valor distinto de 0\n");
            scanf("%f",&num[1]);
        } while (num[1]==0);
        division=num[0]/num[1];
        printf("La division de los dos numeros es: %.2f\n",division);
    }
}

void Multiplicacion (float num[]){
    float multiplicacion;
    multiplicacion=num[0]*num[1];
    printf("La multiplicacion de los dos numeros es: %.2f\n",multiplicacion);
}

int Continuar (void){
    int redo;
    printf("¿Quiere otros numeros?\n");
    printf("(1)Si\n");
    printf("(0)No\n");
    scanf("%d",&redo);
    return redo;
}