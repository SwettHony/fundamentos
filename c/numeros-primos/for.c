#include <stdio.h>
//imprime los numeros impares pero hasta que ellos sean menor que 20
int main() {

    int numero = 2;
    int contador;
    int i;
    int esPrimo = 1;

    for(contador = 1; contador <= 20; contador++){

        numero++;

        for(i = 2; i < numero; i++){

            if(numero % i == 0){
            esPrimo = 0;
            break; 

        }

    }

    if(esPrimo == 1){

        printf("%d\n", numero);

    }

    esPrimo = 1;

    }

    return 0;
}
