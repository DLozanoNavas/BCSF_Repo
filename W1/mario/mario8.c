// Imprime una cuadrícula de ladrillos n por n con un loop

#include <cs50.h>
#include <stdio.h>

int main(void)
{
    int n;
    do
    {
        n = get_int("Tamaño: ");
    } while (n < 1);

    for (int i = 0; i < n; i++)
    {
        printf("#");
        for (int j = 0; j < n; j++)
        {
            printf("#");
        }
        printf("\n");
    }
}
