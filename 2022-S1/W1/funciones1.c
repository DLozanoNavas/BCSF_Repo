#include <stdio.h>

int multiplicar_dos_enteros(int x, int y);

int main(void){

    int respuesta = multiplicar_dos_enteros(1 , 5);

    printf("La respuesta es: %i", respuesta);

}

int multiplicar_dos_enteros(int x, int y){

    printf("x: %i\n",x);

    printf("y: %i\n",y);


    return x * y;

}