// Abstracción

#include <stdio.h>


void pollito(void);

int main(void)
{
    for (int i = 0; i < 3; i++)
    {
        pollito();
    }
}

// Crear pollito una vez
void pollito(void)
{
    printf("Pollito\n");
}
