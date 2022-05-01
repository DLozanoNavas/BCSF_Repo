#include <stdio.h>

void intercambiar(int *a, int *b);

int main(){
    int a = 10;
    int b = 5;

    printf("a: %i\n", a);
    printf("b: %i\n", b);

    intercambiar(&a,&b);

    printf("a: %i\n", a);
    printf("b: %i\n", b);
}


// Pasar valores por referencia (by reference (es el valor original))
// a diferencia de pasar valores por valor (by value (copias de))
void intercambiar(int *a, int *b){

    int tmp = *a;
    *a = *b;
    *b = tmp;

}
