//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Intento 2

int countVowels(char* phrase) { //cuenta las vocales de una frase
int vocales = 0;
    for(int i = 0; phrase[i] != '\0'; i++) {
        char letra =  tolower (phrase[i]);
            if ( letra == 'a' ||
             letra == 'e' ||
             letra == 'i' ||
             letra == 'o' ||
             letra == 'u'
             ){
              vocales++;
              }
    }
    return vocales;
}




void countConsonants(char* phrase){ //cuenta las consonantes
    int consonantes = 0;
    for(int i = 0; phrase[i] != '\0'; i++) {
        char letra =  tolower (phrase[i]);
            if ( isalpha (letra) && ! (letra == 'a' ||
             letra == 'e' ||
             letra == 'i' ||
             letra == 'o' ||
             letra == 'u'
             )){
              consonantes++;
              }
    }
   // return consonantes;
}

void getInput(char* phrase){ //captura la frase del usuario
  printf("Ingrese una frase: \n");
  scanf("%s", phrase);

}



int main(){
    void getInput();

}