/*  		
Desarrollar un programa en C que permita ingresar información de empleados, procesarla y mostrar resultados relevantes a través de un menú interactivo.
Se debe:

1.	Definir una estructura llamada Empleado con los siguientes campos:

•	nombre 
•	edad 
•	salario 

2.	Declarar un vector de tipo Empleado para almacenar la información de hasta 5 empleados.

3.	Implementar las siguientes funciones:

•	ingresarDatos: Permite al usuario ingresar los datos de un empleado.
•	procesarDatos: Procesa los datos ingresados para calcular el promedio de salarios y muestra el nombre del empleado con el salario más alto.
•	mostrarDatos: Muestra la información de todos los empleados ingresados.

Los parámetros de recibir y devolver de cada función quedan a su criterio, pero no se deben utilizar variables globales.

4.	Crear un menú interactivo que permita al usuario realizar las siguientes operaciones:

•	Ingresar datos de un empleado.
•	Procesar y mostrar información relevante de los empleados.
•	Salir del programa.

Propósito del programa:

•	El programa debe calcular el promedio de salarios de los empleados ingresados.
•	Debe identificar al empleado con el salario más alto y mostrar su nombre.
*/

#include <stdio.h>

#define LIMITE_NOMBRE 50
#define EMPLEADOS 5

typedef struct{
    char nombre[LIMITE_NOMBRE];
    int edad;
    float salario;
}empleado_t;

void Ingresar_Datos();
void Imprimir_Datos(empleado_t []);




int main(){
    empleado_t empleado[EMPLEADOS]={{"Pepe",42,10000},{"Kapu",17,500000}};
    Imprimir_Datos(empleado);
}

void Imprimir_Datos(empleado_t empleado[]){
    int i;
    for ( i = 0; i < 10; i++){
        
        
        
        
        
        printf("%s, %d, %.2f\n", empleado[0].nombre, empleado[0].edad, empleado[0].salario);
    }
    
}

