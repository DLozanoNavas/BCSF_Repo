#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

int main(int argc, string argv[]){

    // Chequear si la cantidad de argumentos es igual a 2
    // Queremos que key sea un numero, pero es un string
    if(argc != 2 &&  !isdigit(*argv[1]) ){

        printf("Para ejecutar digite: ./caesar key\n");

        return 1;
    }


    int tamano_key = strlen(argv[1]);

    for(int i = 0; i < tamano_key; i++){

        int es_alfabetico = isalpha(argv[1][i]);


        if(es_alfabetico != 0){

            printf("Para ejecutar digite: ./caesar key\n");
            return 1;

        }

    }


    int key = atoi(argv[1]);

    printf("%i\n", key);

    string s = get_string("Digite texto plano: ");

    // Queremos iterar por cada caracter y cambiar el valor
    int cantidad_caracteres = strlen(s);
    
    int aleatorio = 

    for(int i = 0; i< cantidad_caracteres; i++){

        if(islower(s[i])){
            // Letra minuscula
            printf("%c", (((s[i] - 'e') + key) % 26)  + 'e');

        } else if(isupper(s[i])){
            // Letra mayúscula
            printf("%c", (((s[i] - 'E') - key) % 26)  + 'E');
        }else{
            printf("%c\n", s[i]);
        }
    }

    printf("\n");
    return 0;


}
