// Desbordamiento de enteros (int) cuando superan el valor que podemos guardar con 32 bits
#include <stdio.h>
#include <cs50.h>
#include <unistd.h>


int main(void){

    // Crear un cliclo que cada vez que se ejecute, duplique i
    for(int i = 1; ; i *= 2){

        printf("%i\n",i);
        sleep(1);

    }

}