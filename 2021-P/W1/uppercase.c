#include <stdio.h>
#include <cs50.h>
#include <string.h>

int main()
{
    string s = get_string("Antes: ");

    printf("Después: ");

    for(int i = 0; i < strlen(s); i++)
    {
        // Poner cada letra en mayúsculas.
        if(s[i] >= 'a' && s[i] <= 'z') // es s[i] una minuscula
        {
            printf("%c", s[i] - 32);
        }
        else
        {
            printf("%c", s[i]); // S[i] es una mayúscula
        }
    }
    printf("\n");

}