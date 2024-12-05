/*37. Desarrollar un algoritmo que ingrese tres caracteres y mostrarlos ordenados según el orden 
ascendente del alfabeto*/ 
#include <stdio.h>

// Prototipos de funciones
int verificarLetra(char);
void ordenarLetras(char, char, char);

int main() {
    char letra1, letra2, letra3;

    printf("En este programa va a poder ordenar tres letras en orden ascendente del alfabeto\n");

    // Leer y verificar la primera letra
    do {
        printf("Ingrese la primera letra: ");
        scanf(" %c", &letra1);
        if (!verificarLetra(letra1)) {
            printf("Por favor, ingrese una letra válida.\n");
        }
    } while (!verificarLetra(letra1));

    // Leer y verificar la segunda letra
    do {
        printf("Ingrese la segunda letra: ");
        scanf(" %c", &letra2);
        if (!verificarLetra(letra2)) {
            printf("Por favor, ingrese una letra válida.\n");
        }
    } while (!verificarLetra(letra2));

    // Leer y verificar la tercera letra
    do {
        printf("Ingrese la tercera letra: ");
        scanf(" %c", &letra3);
        if (!verificarLetra(letra3)) {
            printf("Por favor, ingrese una letra válida.\n");
        }
    } while (!verificarLetra(letra3));

    // Ordenar las letras en orden ascendente
    ordenarLetras(letra1, letra2, letra3);

    return 0;
}

// Función que verifica si un carácter es una letra
int verificarLetra(char car) {
    if ((car >= 'A' && car <= 'Z') || (car >= 'a' && car <= 'z')) {
        return 1; // Es una letra
    } else {
        return 0; // No es una letra
    }
}

// Función que ordena tres letras en orden ascendente
void ordenarLetras(char letra1, char letra2, char letra3) {
    char temp;

    // Ordenar las letras en orden ascendente
    if (letra1 > letra2) {
        temp = letra1;
        letra1 = letra2;
        letra2 = temp;
    }
    if (letra1 > letra3) {
        temp = letra1;
        letra1 = letra3;
        letra3 = temp;
    }
    if (letra2 > letra3) {
        temp = letra2;
        letra2 = letra3;
        letra3 = temp;
    }

    // Mostrar las letras ordenadas
    printf("Las letras en orden ascendente son: %c, %c, %c\n", letra1, letra2, letra3);
}