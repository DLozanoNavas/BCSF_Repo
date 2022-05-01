#include <stdio.h>
#include <cs50.h>

int main()
{
    int s[4] = { 5, 6, 7, 8};

    printf("Contenido de s: %i\n", *s);

    printf("Dir s[0]: %p\n", &s[0]);
    printf("Dir s[1]: %p\n", &s[1]);
    printf("Dir s[2]: %p\n", &s[2]);
    printf("Dir s[3]: %p\n", &s[3]);


    printf("Valor %p: %i\n",&s[0], *&s[0]);
    printf("Valor %p: %i\n",&s[1], *&s[1]);
    printf("Valor %p: %i\n",&s[2], *&s[2]);
    printf("Valor %p: %i\n",&s[3], *&s[3]);

}