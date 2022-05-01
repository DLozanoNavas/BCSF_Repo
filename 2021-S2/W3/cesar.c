#include <cs50.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>


int main(int argc, string argv[]){

    if (argc != 2 && !isdigit(argv[1]))
    {
        printf("Numero errado de argumentos. Uso: ./cesar 5\n");
        return 1;
    }

    // en argv[1] se encuentra la clave de encripción.
    int k = atoi(argv[1]);

    string textoConvertir = get_string("Qué texto quieres encriptar? ");


    int cantidadCaracteres = strlen(textoConvertir);

    // Queremos recorrer el texto a convertir CARACTER POR CARACTER
    for(int i = 0; i <  cantidadCaracteres; i++ )
    {
        // TODO: Ecriptar
        if(isupper(textoConvertir[i]))
        {
            printf("%c", 'A' + (textoConvertir[i] - 'A' + k ) % 26 );
        }
        else if (islower(textoConvertir[i]))
        {
            printf("%c", 'a' + ( textoConvertir[i] - 'a' + k) % 26);
        }
        else
        {
            printf("%c", textoConvertir[i]);
        }

    }
    printf("\n");

}

