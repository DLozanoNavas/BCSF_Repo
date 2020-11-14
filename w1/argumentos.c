#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){

    printf("Pasaste %i argumentos.\n", argc);


    for(int i = 0; i < argc; i++){

        printf("El argumento en %i es %s.\n", i , argv[i] );

    }

}