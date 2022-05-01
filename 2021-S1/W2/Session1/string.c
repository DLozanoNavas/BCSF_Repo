#include <stdio.h>
#include <cs50.h>

int main(){

    int num2 = get_int("Dame un numero: ");
    int num1 = get_int("Dame otro numero: ");

    string texto_a_formatear = "el resultado de sumar %i y %i es %i\n";

    printf(texto_a_formatear, num1, num2, num1 + num2);

}

