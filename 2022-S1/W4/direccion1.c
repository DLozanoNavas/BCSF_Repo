#include <stdio.h>

int main(){

    // Un puntero es una dirreción a un espacio de memoria

    int i = 50;

    int d = i;

    d = 500;

    int* pi = &i;


    *pi = 100;

    printf("i: %i\n", i);
    printf("d: %i\n", d);

    printf("%i\n", *pi);

}