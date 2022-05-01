#include <stdio.h>


void intercambiar(int* a, int* b);

int main(){

    int a = 10 ;

    int b = 5;

    
    printf("%i", b)
    



    intercambiar( &a, &b);



    printf("A: %i\n", a);
    printf("B: %i\n", b);

}


void intercambiar(int* a, int* b){

    int tmp = *a;
    a = b;
    b = tmp;

}