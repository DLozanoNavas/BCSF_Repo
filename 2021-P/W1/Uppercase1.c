#include <stdio.h>
#include <cs50.h>
#include <string.h>
#include <ctype.h>


int main()
{
    string s = get_string("Antes: ");

    printf("Después: ");

    for(int i = 0; i < strlen(s); i++)
    {
        printf("%c", toupper(s[i]));
    }
    printf("\n");

}