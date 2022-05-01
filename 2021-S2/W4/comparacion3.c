#include <stdio.h>
#include <cs50.h>
#include <string.h>
int main()
{
    char* s = get_string("s: ");
    char* m = get_string("m : ");

    if(strcmp(s, m) == 0)
    {
        printf("Iguales\n");
    }
    else
    {
        printf("Diferentes!\n");
    }

}