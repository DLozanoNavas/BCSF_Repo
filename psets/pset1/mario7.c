#include <stdio.h>
#include <cs50.h>

int main(){

    int altura;

    do {

        altura = get_int("Altura: ");

    } while (altura < 1);

    int anchura;

    do {

        anchura = get_int("Anchura: ");

    } while(anchura <1);



    for(int i = 0; i < altura ; i++) {

        for(int j = 0; j < anchura; j++ ){

            printf("#");

        }

        printf("\n");

    }




}
