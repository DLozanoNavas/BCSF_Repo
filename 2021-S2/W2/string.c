#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){

    string s = get_string("s: ");
    // Imprimir caracter por caracter
    for(int i = 0; i < strlen(s); i++){

        char caracterActual = s[i];

        printf("Character #%i: %c\n", i, caracterActual);

    }


}