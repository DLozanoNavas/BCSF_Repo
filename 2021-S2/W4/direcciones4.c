#include <stdio.h>

int main()
{
    char* s = "EMMA";

    printf("%p\n", s);

    printf("%c\n", *s);
    printf("%c\n", *(s+1));
    printf("%c\n", *(s+2));
    printf("%c\n", *(s+3));
}