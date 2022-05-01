#include <stdio.h>
#include <cs50.h>

// Declaración de funciones ( siempre antes de main() )
int multiplicar_dos_numeros_enteros(int a, int b);
int multiplicar_tres_enteros(int a, int b, int c);

void imprimir_numero();

int main(int argc, string argv[]){

    imprimir_numero();

}


void imprimir_numero(){

    // Llamada a nuestra función multiplicar_dos_numeros_enteros

    int a = get_int ("Dame un numero: ");
    int b = get_int("Dame otro numero: ");

    int resultado = multiplicar_dos_numeros_enteros(a,b);

    printf("El numero a imprimir es: %i\n", resultado );
}

// Implementación de la función multiplicar_dos_enteros
// Sobre esta función: Esta función multiplica dos enteros

int multiplicar_dos_numeros_enteros(int a, int b){

    return a * b;
}
