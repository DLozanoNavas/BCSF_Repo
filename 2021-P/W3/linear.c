#include <stdio.h>
#include <cs50.h>

int main(int argc, string argv[])
{
    // Preguntar al usuario por la colección
    int count = get_int("Cantidad:");

    int numeros[count];

    for(int i = 0; i < count; i++){
        numeros[i] = get_int("numeros[%i]: ");
    }




    while(true){

        int query = get_int("Numero a buscar:");

        for(int i = 0; i < count; i++)
        {
            if(numeros[i] == query)
            {
                printf("%i existe en la colección\n", query);
                break;
            }
        }
        // printf("50 no está en la colección\n");
    }


    return 1;
}