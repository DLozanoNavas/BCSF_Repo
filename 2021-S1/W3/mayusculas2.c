#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>

int main(){

    string palabra = get_string("Ingrese una palabra: ");

    int n = strlen(palabra);

    printf("El string tiene %i caracteres\n", n);

    for (int i = 0; i < n; i++ ){

        if (islower(palabra[i])) {
            
            // To Uppercase (Poner en mayusculas)
            printf("%c", toupper( palabra[i] ) );

        } else {
            printf("%c", palabra[i]);
        }


    }
    printf("\n");

}