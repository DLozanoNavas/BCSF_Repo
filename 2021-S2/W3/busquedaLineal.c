#include <stdio.h>

int main()
{
    int puntajes[7] = { 7, 2, 1, 6, 3, 4, 50  };


    // Recorrer la colección
    for (int i = 0; i < 7; i++)
    {
        if(puntajes[i] == 50) {
            printf("¡Encontrado!\n");
            return 0;
        }
    }

    // Si llegamos hasta acá, significa que ya terminamos de recorrer la colección y
    // no encontramos el numero 50.
    printf("No encontrado.\n");
    return 1;

}
