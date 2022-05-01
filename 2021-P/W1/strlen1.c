#include <stdio.h>
#include <cs50.h>

int main()
{
    string s = get_string("S: ");


    int c = 0;

    // Usando un ciclo que identifica que no hemos llegado al caracter '\0'
    // aumentar c.

    for( ; s[c] != '\0'; )
    {
        c++;
    }

    printf("%i\n", c);
}