#include <stdio.h>
#include <cs50.h>

int main(void){

    int tablero[3][3];

    // Ponga su flota naval
    for(int i = 0; i < 3; i++){
        for(int j = 0; j< 3; j++ ) {

            tablero[i][j] = get_int("Quieres poner flota en la posición (%i,%i): (1: Sí. 0: No.) ", i, j);

        }
    }

    printf("Que empieze el juego!");

    for(int i = 0; i< 3; i++){

        for(int j = 0; j < 3; j++){

            char Misil = get_char("Deseas mandar un misil a (%i,%i)? (y,n) ",i,j );

            if(Misil == 'y'){

                if(tablero[i][j] != 0){
                    printf("Acertaste el tiro!\n");
                }else{
                    printf("Fallaste el tiro!\n");
                }

            }

        }

    }



}