//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>

//Intento 2

int countVowels(char* phrase) {
    //cuenta las vocales de una frase
    for(int i = 0; i < strlen(phrase); i++) {
        if(phrase[i] == 'a' ||
            phrase[i] == 'e' ||
            phrase[i] == 'i' ||
            phrase[i] == 'o' ||
            phrase[i] == 'u') {
            phrase[i]++;

        }

    }
    return strlen(phrase);
}


/* Intento 1

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
*/



void countConsonants(char* phrase){ //cuenta las consonantes
    int consonantes = 0;
    int i = 0;
    while(phrase[i] != '\0') {
        if (isalpha(phrase[i])) {
            consonantes++;
        }
        i++;
    }

}

void getInput(char* phrase){ //captura la frase del usuario
  printf("Ingrese una frase: \n");
  scanf("%s", phrase);


  }


int main(){
    void getInput();

}