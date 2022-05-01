#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[]){




    // Chequear si el programa se inició con al menos un argumento

    // Y de lo contrario terminar la ejecución del programa

    if(argc < 2){
        return 1;
    }

    printf("¡Hola %s!", argv[1]);

    return 0;
}