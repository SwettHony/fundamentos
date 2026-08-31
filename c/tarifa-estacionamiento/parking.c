/*
    Name: Pablo Adrian Jimenez Hernandez
    Account number: 424103642
    Group: 1151
    Date: 15/10/2023
    Objective: Se requiere calcular la tarifa de un estacionamiento, esta se calcula tomando en cuenta los siguientes puntos:
        1.Se cuenta con 15 minutos de tolerancia a partir de la hora y minuto de entrada. 
        2.Si se pasa la tolerancia a partir del minuto 1 y hasta el minuto 60 tendrá un costo de $15 pesos.
        3.Pasada la primera hora, cada intervalo de 60 minutos tendrá un costo de $15 p
*/

#include <stdio.h> //Libreria principal

int main(){

    int hE,hS,hT,h=1; //Declaramos las variables para las Horas: hE (Hora Entrada), hS (Hora Salida), hT (Hora Total) y h (Hora de tolerancia)
    int mE,mS,mT,m=16; // Declaramos las variables para los Minutos: mE (Minuto Entrada), mS (Minuto Salida), mT (Minuto Total) y m (Minutos de tolerancia)
    int p=15,pT; // Declaramos las variables para el Precio: p (Precio) y pT (Precio Total)

    //Hora y munitos de Entrada

    printf("Ingresa la Hora de Entrada:\n "); // Solicitamos al Usuario ingresar la Hora de Entrada
    scanf("%d", &hE); // Lo guardamos en la variable hE
    printf("Ingresa los Minutos de la hora de Entrada:\n "); //Solicitamos al Usuario ingresar los munitos de la Hora de Entrada
    scanf("%d",&mE); // Lo guardamos en la variable mE

    //Hora y minutos de Salida

    printf("Ingresa la Hora de Salida:\n "); // Solicitamos al Usuario ingresar la Hora de Salida
    scanf("%d",&hS); // Lo guardamos en la variable hS
    printf("Ingresa los Minutos de la hora de Salida:\n "); // Solicitamos al Usuario ingresar los minutos de la Hora de Salida
    scanf("%d",&mS); // Lo guardamos en la variable mS

    //Calculo Hora y Minutos Total

    hT= hS-hE; // Calculamos las Horas totales que estubo dentro del estacionamiento restando la Hora de Salida con la Hora de Entrada
    mT= mS-mE; // Calculamos los Minutos totales que estubo dentro del estacionamiento restando los Minutos de Salida con los Minutos de Entrada

    // Desarrollo del codigo

    if(hT<=h&&mT<=m){ // Utilizamos un if por si se cumple el caso de que esta dentro de la hora y munitos de tolerancia

        printf("\nHora de Entrada:\n %d:%d\n",hE,mE); // Si se cumple, se imprime la Hora a la que entro
        printf("Hora de Salida:\n %d:%d\n",hS,mS); // La hora a la que Salio
        printf("Tiempo transcurrido:\n %d:%d\n",hT,mT); // El tiempo que estubo dentro
        printf("Puedes salir :D"); // Y como esta en el tiempo de tolerancia, puede salir sin pagar :D

    }else if(hT>=h&&mT>=m || hT>=h&&mT<=m){ // Si no se cumple, se verifica si se cumple el caso cuando pasa mas de una hora dentro del estacionamiento (ciclos de 60 min)

        pT=hT*p; // Si se cumple, se multiplica el valor de las Horas que paso dentro por el precio para calcular cuanto tiene que pagar por el tiempo que estubo dentro 

        printf("\nHora de Entrada:\n %d:%d\n",hE,mE); // Despues se imprime la Hora de Entrada
        printf("Hora de Salida:\n %d:%d\n",hS,mS); // La hora a la que Salio
        printf("Tiempo transcurrido:\n %d:%d\n",hT,mT); // El tiempo que estubo dentro
        printf("Debes pagar $%d para poder salir",pT); // Y su Tarifa

    }

    return 0;
}