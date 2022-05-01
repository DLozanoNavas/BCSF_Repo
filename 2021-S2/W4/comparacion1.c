#include <stdio.h>
#include <cs50.h>

int main()
{
    char* s = NULL;
    char* m = NULL;

    s = get_string("s: ");
    m = get_string("m: ");

    if(s != m)
    {
        printf("Diferentes!\n");
    }
    else
    {
        printf("Iguales!\n");
    }
}