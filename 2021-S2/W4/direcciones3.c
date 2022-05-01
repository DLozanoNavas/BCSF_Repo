#include <stdio.h>
#include <cs50.h>

int main()
{
    string s = "EMMA";

    printf("%p\n", s);
    printf("%c\n", *s);
    printf("%p\n", &s[1]);
    printf("%c\n", s[1]);

}