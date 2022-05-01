#include <stdio.h>
#include <cs50.h>

void establecer_entero(int x);
void establecer_matriz(int matriz[4]);

int main(void){

    // Creamos un Entero
    int x = 10;

    // Crear una Matriz
    int matriz[4] = { 0, 1, 2, 3 };

    // Pasar valores por copia o valor

    printf("La variable x antes del cambio: %i\n", x);

    establecer_entero(x);

    printf("La variable x despues del cambio: %i\n", x);

    // Pasar valores por referencia

    printf("La matriz en su posición 0 antes del cambio es igual a: %i\n", matriz[0]);

    establecer_matriz(matriz);

    printf("La matriz en su posición 0 después del cambio es igual a: %i\n", matriz[0]);

    // Pasar parámetros a funciones por valor (by value):
    // Cuando estoy trabajando con variables y se las paso a una función,
    // estoy pasando una copia de la variable y NO la variable en si misma.

    // Pasar parámetros a funciones por referencia (by reference):
    // Cuando estoy trabajando con matrices y se las paso a una función,
    // Estoy pasando la versión original de la matriz.
}


void establecer_entero(int x){
    x = 22;
}


void establecer_matriz(int matriz[4]){
    matriz[0] = 22;
}