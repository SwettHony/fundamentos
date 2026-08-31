/*
    Name: Pablo Adrian Jimenez Hernandez
    Account number: 424103642
    Group: 1151
    Date: 19/10/2023
*/

#include <stdio.h>

int main(){
    
    int n; //declaramos una funcion de tipo entero
    
    printf("Escribe un numero Entero: "); //solicitamos al ucuario ingresar un numero de tipo Entero
    scanf("%d",&n); //Guardamos el valor ingresado en la variable n

   menormayor(n);

    return 0;
}

int menormayor(int n){

    if(n==0){ //hacemos una condicion; si n es 0 
        printf("\n%d es Neutro.",n); // si la cumple, imprime que 0 es neutro
    }else if(n>0){ //si no se cumple, hacemos otra condicion, si n es mayor a 0
        printf("\n%d es Positivo.",n); //si la cumple, imprime que n es positivo
    }else{ //si no se cuple
         printf("\n%d es Negativo.",n); //se imprime que n es negativo
        }
        
    return 0;
}