#include <stdio.h>
#include <cs50.h>

int main(){

    int altura = 0;

    // Repetir una serie de pasos sin aburrirse.

    do {

        altura = get_int("Altura: ");

    } while (altura <= 1);


    for (int i = 0; i < altura; i++){

        printf("###\n");

    }
}