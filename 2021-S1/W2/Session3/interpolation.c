#include <stdio.h>
#include <cs50.h>

void sumar_e_imprimir(int a , int b);

int main(void){

    int numero1 = get_int("Dame un número: ");

    int numero2 = get_int("Dame otro número: ");

    sumar_e_imprimir(numero1, numero2);

}

void sumar_e_imprimir(int a , int b){

    printf("El resultado de sumar %i y %i es: %i \n", a , b , a + b );

}
