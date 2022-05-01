#include <stdio.h>
#include <cs50.h>

int main()
{
    int numeros[] = { 4, 1, 3, 5, 9, 50 };

    // Buscar el número 50
    for(int i = 0; i < 6; i++){

        if(numeros[i] == 50){
            printf("Encontrado!\n");
            return 0;

        }
    }

    printf("No encontrado.\n");
    return 1;
}