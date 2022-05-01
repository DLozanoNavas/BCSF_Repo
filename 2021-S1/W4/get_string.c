#include <stdio.h>

char * get_string(char *pregunta, char *respuesta);

int main(){

    char respuesta[100];

    char* s = get_string("Digite un string: ", respuesta);

    printf("El usuario tipeó: %s\n", s);
    
    return 0;
}


char * get_string(char *pregunta, char *respuesta){


    printf("%s ", pregunta);

    scanf("%s", respuesta);

    return respuesta;

}