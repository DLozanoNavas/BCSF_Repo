// Calcula un resto o residuo

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    // Solicitar al usuario un entero
    int n = get_int("n: ");

    // Verifica la paridad del entero
    // determinando el residuo de su división por 2
    // mediante el operador módulo (%)
    if (n % 2 == 0)
    {
        printf("Par\n");
    }
    else
    {
        printf("Impar\n");
    }
}
