#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(){

    string s = get_string("s: ");

    printf("Antes: %s\n", s);

    printf("Después: ");

    // Recorrer s (caracter por caracter) y poner en mayus.
    for(int i = 0; i< strlen(s); i++){
        printf("%c", toupper(s[i]) );
    }
    printf("\n");

}