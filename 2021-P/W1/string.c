#include <stdio.h>
#include <cs50.h>

int main(void)
{
    string s = get_string("Input: ");

    printf("Output: ");

    for(int i = 0; s[i] != '\0'; i++)
    {
        printf("%c", s[i]);
    }
    printf("\n");
}