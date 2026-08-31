#include <stdio.h> //libreria principal
/*
    Date: 30/08/23
    Pablo Adrian Jiménez Hernández
    No. de cuenta: 424103642
*/
int edad, anno; // variable entera para los valores de la edad y el año de nacimiento
float peso, altura; //variable flotante para la altura y el peso en decimal

int main(){

    printf("\nIntroduce tu edad:  "); // solicita los años del usuario
    scanf("%d", &edad); // guarda el valor en la variable entera

    printf("\nIntroduce tu peso en kilogramos:  "); // solicita el peso en kilogramos del usuario
    scanf("%f", &peso); // guarda el valor en la variable flotante

    printf("\nIntroduce tu altura en metros:  "); // solicita la altura en metros del usuario
    scanf("%f", &altura); // guarda el valor en la variable flotante

    printf("\nIntroduce tu año de nacimiento:  "); //solicita el año de nacimiento del usuario
    scanf("%d", &anno); // guarda el valor en la variable entera

    printf("\nTienes %d años ", edad); // imprime la edad del usuario
    printf("\nPesas %.2f kg ", peso); // imprime el peso del usuario //el %.2f es para que imprima las primeras dos decimales
    printf("\nMides %.2f metros ", altura); // imprime el valor de la altura del usuario //el %.2f es para que imprima las dos primeras decimales
    printf("\nNaciste en el año %d ", anno); //imprime el valor del año de nacimiento del usuario

    return 0;
}