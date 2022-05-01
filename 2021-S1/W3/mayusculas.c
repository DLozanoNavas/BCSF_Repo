#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main(){

    string palabra = get_string("Ingrese una palabra: ");

    int n = strlen(palabra);

    printf("El string tiene %i caracteres\n", n);

    for (int i = 0; i < n; i++ ){

        if(palabra[i] >= 'a' && palabra[i] <= 'z'){

            printf("%c", palabra[i]  - 32 );

        }else{
            printf("%c", palabra[i]);
        }


    }
    printf("\n");

}