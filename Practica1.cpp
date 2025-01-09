//
// Created by usuario on 08/01/2025.
//

#include <stdio.h>
#include <ctype.h>

    int validatePositiveInt(int limit) {
      //Valida que el caracter es un numero y es positivo

      if (isdigit(limit)){
        if(limit > 0){

        } else {
          printf("El numero ingresado es invalido\n");
          return 0;
        }
      }
      return 0;
    }

    void generateEvenNumbers(int limit){ //usa un bucle para generar los numeros pares
      printf("Los numeros pares de 1 a %d son: \n", limit);
      for(int i=1; i <=limit; i++){
        if(i%2==0){
          printf("%d\n", i);

        }
      }
    }



int main(){

    int limit;
      char opcion;

    printf("Ingrese un numero: \n");
    scanf("%d", &limit);
    validatePositiveInt(limit);
    generateEvenNumbers(limit);


    return 0;

}