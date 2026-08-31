/*
    Name: Pablo Adrian Jimenez Hernandez
    Date: 05/10/23
    Objective: Escribir un programa que acepte un ángulo en grados y visualice el tipo de ángulo correspondiente a los grados introducidos.
*/
#include <stdio.h>//libreria principal

int main(){

    float a; //declaramos una funcion tipo float para los grados

    printf("\nIngresa el valor de tu angulo en grados: "); //pedimos al usuaio que ingrese el valor de su angulo en grados
    scanf("%f", &a); //guardamos el valor proporcionado en la variable tipo float

    if (a<90){ //creamos una condicion con if
        printf("\nTu angulo es agudo"); //imprime el texto si se cumple la condicion
    }else if (a>90){ //si no se comple la condicion 1, se espera que se cumpla la condicion 2
        printf("\nTu angulo es obtuso"); //si se cumple la condicion 2 se imprime el texto
    }else printf("\nTu angulo es recto"); //si no se cumple ninguna de las condiciones anteriores, se imprime el texto dando a entender que "a" es igual a 90 grados

    return 0;
}