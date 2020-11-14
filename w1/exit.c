#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[] ){


    if(argc == 1){
        printf("Ejecucuón: ./exit nombre\n");
        return 1;
    }

    printf("¡Hola, %s!\n", argv[1]);

}