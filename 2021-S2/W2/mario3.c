#include <stdio.h>
#include <cs50.h>

int main(){

    int largo, alto;

    alto = get_int("¿Qué tan alto? ");

    largo = get_int("¿Qué tan largo?");


    for( int i = 0 ; i < alto ; i++)
    {
        for(int k = 0; k < alto -i ; k++ ){
            printf(" ");
        }

        for(int j = 0; j < i + 1 ; j++)
        {
            printf("#");
        }

        printf("\n");
    }
    printf("\n");

}