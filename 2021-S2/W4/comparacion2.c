#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    char* s = get_string("s: ");
    string m = get_string("m: ");

    if(strlen(s) != strlen(m))
    {
        printf("Diferentes!\n");
        return 1;
    }

    // Recorrer s caracter por caracter y evaluar si: s[i] == m [i]

    for (int i = 0; i < strlen(s); i++)
    {
        if(s[i] != m[i])
        {
            printf("Diferentes!\n");
            return 1;
        }
    }

    printf("Iguales!\n");
    return 0;

}