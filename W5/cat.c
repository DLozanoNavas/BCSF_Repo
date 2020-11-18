#include <stdio.h>

int main(){

    FILE* archivo = fopen("punteros.c", "r");

    if(archivo == NULL){
        printf("Algo salió mal.\n");
        return 1;
    }

    char ch;

    while( (ch = fgetc(archivo)) != EOF  ){
        printf("%c",ch);
    }


}