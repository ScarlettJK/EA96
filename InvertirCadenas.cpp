//
// Created by usuario on 13/01/2025.
//

#include <stdio.h>
#include <string.h>

#define MAX 50


void reverseString(char* original, char* reversed){ //Invierte la cadena

    int largo = strlen(original);

    for (int i = 0; i < largo; i++){
        reversed[i] = original[largo - i - 1];
    }

    reversed[largo] = '\0';
}


void getInput(char* phrase){ //Captura la cadena ingresada por el usuario

    printf("Ingrese una frase: \n");
    fgets(phrase, MAX, stdin);

    phrase [strcspn(phrase, "\n")] = '\0';

}


int main()
{
    char original[MAX];
    char reversed[MAX];

    getInput(original);
    reverseString(original, reversed);

    printf("Cadena original: %s\n", original);
    printf("Cadena invertida: %s\n", reversed);

    return 0;

}