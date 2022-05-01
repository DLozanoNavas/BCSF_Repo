#include <stdio.h>
#include <cs50.h>

int main(){

    int entero = 10;
    int entero2 = 54654654;
    float decimal = 2.5f;
    string palabra = "¡Hola Mundo!";
    bool verdad = false;
    char caracter = 'c';
    char caracter2 = '9';

    // Existe una función en C que nos permite obtener el tamaño de un tipo de dato.
    // Esa función es nuestro gran amigo sizeof() (nos da el valor en bytes)

    double granDecimal = 2.0000000000000000000005;
    long granEntero = 132131654321654;


    printf("Entero es: %li bytes; es decir: %li bits.\n", sizeof(int), sizeof(int) * 8 );
    printf("Float es: %li bytes; es decir: %li bits.\n", sizeof(float), sizeof(float) * 8 );
    printf("Char es: %li bytes; es decir: %li bits.\n", sizeof(char), sizeof(char) * 8 );
    printf("Bool es: %li bytes; es decir: %li bits.\n", sizeof(bool), sizeof(bool) * 8 );
    printf("Double es: %li bytes; es decir: %li bits.\n", sizeof(double), sizeof(double) * 8 );
    printf("Long es: %li bytes; es decir: %li bits.\n", sizeof(long), sizeof(long) * 8 );


}