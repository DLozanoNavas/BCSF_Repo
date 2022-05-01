#include <stdio.h>
#include <cs50.h>


int main() {

    int campo_de_batalla[3][3];



    for ( int i = 0; i < 3; i++) {

        for (int j = 0; j < 3; j++) {

            do{
                campo_de_batalla[i][j] = get_int("¿Poner barco en la posición [%i][%i]?", i, j);
            } while (campo_de_batalla[i][j] != 0 && campo_de_batalla[i][j] != 1);

        }

    }

    int x, y;

    while (true){

        do{

            x = get_int("Coordenada en x para disparar: ");

        } while ( x > 2 || x < 0);;


        do{

            y = get_int("Coordenada en y para disparar: ");

        } while ( y > 2 || y < 0);


        if(campo_de_batalla[x][y] == 1){

            printf("Has dado en el blanco!\n");

        } else {

            printf("Has fallado el tiro!\n");

        }

    }

}


