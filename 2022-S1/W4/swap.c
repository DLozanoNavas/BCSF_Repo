#include <stdio.h>

void intercambiar(int* x, int* y);

int main(){
    int i = 10;
    int n = 5;
    // Pasar valores por referencia
    intercambiar(&i , &n);

    printf("i: %i\n", i);
    printf("n: %i\n", n);

}

void intercambiar(int* x, int* y){

    int tmp = *x;
    *x = *y;
    *y =  tmp;

}