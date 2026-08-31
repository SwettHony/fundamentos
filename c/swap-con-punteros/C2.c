/*
    Name: Pablo Adrian Jimenez Hernandez
    Account number: 424103642
    Group: 1151
    Date: 20/10/2023
*/

#include <stdio.h>

int main(){

    int x,y; //declaramos dos variables de tipo entero
    
    x=11; //les damos valores a nuestras variables
    y=69;

    swap(&x,&y); //Llamamos a la función "swap" para que utilice los valores dados anteriormente
    
    printf("%d\n", x); //Imprime el valor de x despues de ser intercambiado en swap

}

void swap (int *x, int *y){ //la funcion "swap" la declaramos tipo void para que no returne nada

    int tem; // eclaramos una funcion temporal para poder hacer las igualaciones

    tem = *x;
    *x = *y; //hacemos las igualaciones de tal modo que se intercambien los valores
    *y = tem;

    /* Nota: no se puede hacer el cambio de valor de las variables sin los punteros, amenos de cambiar el valor de x por y en la imprecion. */

}