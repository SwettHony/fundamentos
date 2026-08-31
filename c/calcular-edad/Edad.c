#include <stdio.h> //libreria principal
/*
    Date: 29/08/23
    Pablo Adrian Jimenez Hernandez
    No. de cuenta: 424103642
*/
//variables
int year = 2023; //variable entera con el valor del año actual
int date;
int result;

int main(){ //cuerpo del programa
    printf("\n Ingresa tu año de nacimiento: "); //solicita el año de nacimiento
    scanf("%d", &date); //guarda el valor del año
    result = year - date; //hace la operacion de resta para calcular la edad
    printf("\n Tienes %d años. \n \n", result);//da la edad del usuario
    return 0;
};