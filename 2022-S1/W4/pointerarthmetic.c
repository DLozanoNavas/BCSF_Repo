#include <stdio.h>

int main(){
    // Casos de uso del operador *
    // 1. Declarar una variable de tipo puntero
    // 2. Dereferenciar una dirección
    // 3. Multiplicar dos números (No como puntero)

    // NOTA: Los punteros hacen parte tanto
    // del tipo de dato como del nombre.

    int n = 65;
    int * p = &n;
    printf("%i\n", n);
    printf("%p\n", p);
    printf("%c\n", *p);

}