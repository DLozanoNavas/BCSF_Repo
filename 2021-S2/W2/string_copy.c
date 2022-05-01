#include <cs50.h>
#include <stdio.h>
#include <string.h>

int main(){

    // Creamos una variable de tipo string llamada s1
    string s1 = get_string("s: ");
    // Guardamos la candida de caracteres de s1
    int cantidadCaracteres = strlen(s1);
    // Imprimimos s1 (caracter por caracter)
    printf("S1: ");
    for(int i = 0; i < cantidadCaracteres;i++){
        printf("%c", s1[i]);
    }
    // Imprimir salto de línea final para s1.
    printf("\n");


    // Creamos s2 del mismo tamaño que s1
    char s2[cantidadCaracteres];

    // Copiar los caracteres de s1 a s2
    for(int i = 0; i < cantidadCaracteres; i++){

        s2[i] = s1[i];

    }
    // Imprimimos s2 (caracter por caracter)
    printf("S2: ");
    for(int i = 0; i < cantidadCaracteres; i++){
        printf("%c", s2[i]);
    }

    // Imprimir salto de línea final para s2.
    printf("\n");

}