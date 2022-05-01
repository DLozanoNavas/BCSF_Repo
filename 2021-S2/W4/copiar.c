#include <stdio.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

int main()
{
    char* s = get_string("s: ");

    char* t = s;

    if(strlen(t) > 0)
    {
        t[0] = toupper(t[0]);
    }

    printf("s: %s\n", s);
    printf("t: %s\n", t);
}