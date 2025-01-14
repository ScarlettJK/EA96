//
// Created by usuario on 09/01/2025.
//

#include <stdio.h>
#include <ctype.h>
#include <string.h>



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




int countConsonants(char* phrase){ //cuenta las consonantes
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
    return consonantes;
}

void getInput(char* phrase){ //captura la frase del usuario
    printf("Ingrese una frase: \n");
    fgets(phrase, 100, stdin);
    //phrase[strcspn(phrase, ""\n)] = '\0';

}



int main(){
    char phrase[100];
    getInput(phrase);

    int vocales = countVowels(phrase);
    int consonantes = countConsonants(phrase);

    printf("Numero de vocales: %d\n", vocales);
    printf("Numero de consonantes: %d\n", consonantes);

    return 0;

}