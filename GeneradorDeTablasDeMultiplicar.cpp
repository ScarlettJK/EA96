//
// Created by usuario on 13/01/2025.
//
#include <stdio.h>

int validatePositiveInt(int number){ //Asegura que el numero sea positivo

    if (number > 0){
        return 1;
    } else {
        printf("Error: el numero ingresado no es positivo");
        return 0;
    }

}


void generateTable(int number, int tabla[]){ //Utilza un bucle para generar la tabla

    for (int i = 1; i <= 10; i++){
        tabla [i - 1] = number * i;
    }
}


void printTable(int number, int tabla[]){ //Muestra la tabla

    printf("la tabla de multiplicar de %d es la siguiente: \n", number);

    for(int i = 1; i <= 10; i++){
        printf("%d x %d = %d\n", number, i, tabla[i - 1]);
    }

}


int main()
{
    int number;
    int tabla[10];

    printf("Generador de tablas de multiplicar\n");
    printf("Ingrese un numero: \n");
    scanf("%d", &number);

    validatePositiveInt(number);
    generateTable(number, tabla);
    printTable(number, tabla);

    return 0;

}