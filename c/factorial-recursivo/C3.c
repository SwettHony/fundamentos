/*
    Name: Pablo Adrian Jimenez Hernandez
    Account number: 424103642
    Group: 1151
    Date: 22/10/2023
*/

#include <stdio.h>

int main(){

    int n,r; //declaramos dos variables de tipo entero

    printf("Ingresa un numero: "); //solicitamos al usuario un numero al cual quiera sacar el Factorial
    scanf("%d", &n); //guardamos el valor introducido anteriormente en la variable n

    r = factorial(n); //le damos a r el resultado de la funcion factorial, al mismo tiempo que mandamos a llamar la funcion para que lo calcule

    printf("El factorial de %d es: %d",n,r); //imprime el resultado del factorial de n numero

}

int factorial(int num){ //declaramos a factorial como una funcion de tipo entero 


    if (num>0){ //si el numero introducido es mayor a 0

        return (num*factorial(num-1)); //regresa el resultado de la muliplicacion del numero por factorial(numero-1) (Recursividad) haciendo un pequeño bucle asta que num=1
        }

    return 1; //gracias a este return, si lo quitamos el programa calcula cuando (en el caso se calcula el factorial de 5) 120*factorial(1-1)= 0

}