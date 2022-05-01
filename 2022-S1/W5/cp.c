#include <stdio.h>

int main(int argc, char * argv[]){

    if( argc != 3){
        printf("Uso: ./cp ORIGEN DEST\n");
        return 1;
    }


    FILE* archivo_origen = fopen(argv[1], "r");

    FILE* archivo_destino = fopen(argv[2], "a");

    if(archivo_origen == NULL){
        printf("Algo salió mal.\n");
        return 1;
    }

    char ch;

    while( (ch = fgetc(archivo_origen)) != EOF  ){
        fputc(ch, archivo_destino);
    }


}