#include <stdio.h>

int main(void){

    int k = 3;

    printf("%i\n", k);

    int* pk = &k;

    printf("%p\n", pk);

    printf("%i\n", *pk);


}