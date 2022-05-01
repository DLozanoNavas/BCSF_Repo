#include <stdio.h>

void establecer_matriz(int matriz[4]);
void establecer_entero(int x);

int mult_enteros(int x, int y);

int main(){

    int vector[4] = {1,2,3,4};
    int n = 5;

    establecer_entero(n);
    printf("n: %i\n", n);


    establecer_matriz(vector);
    printf("Vector[0]: %i\n", vector[0]);


    int y = mult_enteros(2, 3);
    printf("y: %i\n", y);
    
    return 0;
}


void establecer_entero(int x){
    x = 10;
}

void establecer_matriz(int matriz[4]){
    matriz[0] = 10;
}


int mult_enteros(int x, int y){
    return x * y;
}
