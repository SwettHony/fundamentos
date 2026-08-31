/*
    Date:  02/09/2023
    Objective: Crear un programam que pida el valor de un producto, calcule el IVA e 
    imprima de regreso el precio subtotal del producto, el iva del producto y el valor todal del ptroducto.    
    Author:Pablo Adrian Jiménez Hrnández
    No. de Cuneta: 424103642
*/
#include <stdio.h> //libreria principal

int main(){ //funcion principal o cuerpo del programa

    float vProducto, vIVA, vTotal; //variables en formato float para el valor del producto y el IVA
    float iva = 0.16; //variable del valor del IVA (%16=0.16)

    printf("\n Ingrese el valor de su producto: "); //solicita al usuario el precio de su producto
    scanf("%f", &vProducto); //guarda el valor introducido en la variable vProducto

//operaciones para conseguir el valor del IVA por medio de una regla de tres
    vIVA = vProducto * iva; //mulctiplica el valor del procuto (vProducto) con 0.16 (el valor del IVA) y lo registra en la variable vIVA
    vTotal = vProducto + vIVA; //suma el valor del producto (vProducto) con el valor el iva (vIVA) para registrarlo en la variable vTotal

    printf("\n El valor subtotal de tu producto es de; %.2f \n", vProducto); //Imprime le valor subtotal del producto
    printf("\n El valor del IVA de tu producto es de: %.2f \n", vIVA); //Imprime el valor calculado del IVA del producto
    printf("\n El valor total de tu producto es de: %.2f \n", vTotal); //Imprime el valor total del producto

    return 0;
}