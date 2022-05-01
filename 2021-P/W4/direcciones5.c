#include <stdio.h>
#include <cs50.h>

int main()
{
    char* s = "EMMA";

    printf("%c\n", *s);
    printf("%c\n", *(s + 1));
    printf("%c\n", *(s + 2));
    printf("%c\n", *(s + 3));
    printf("%c\n", *(s + 4));

}