#include <stdio.h>
#include <stdlib.h>

int main(){
    
    char* s = malloc(5 * sizeof(char));
    printf("s: ");
    scanf("%s", s);
    printf("s: %s\n", s);

}