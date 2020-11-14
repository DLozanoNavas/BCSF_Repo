#include <stdio.h>

int main(){

    int n = 50;
    printf("n: %i\n", n);

    // UN PUNTERO SIMPLEMENTE ES UNA DIRECCIÓN
    int* p = &n;

    printf("La dirección de n es: %p\n", p);

}