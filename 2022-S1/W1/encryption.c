#include <stdio.h>
#include <stdlib.h>
#include <cs50.h>
#include <ctype.h>
#include <string.h>

#define MAYUS 65
#define MINUS 97


int main(int argc, string argv[]){

    if(argc == 1){
        printf("Uso: ./encryption key.\n");
        return 1;
    }

    int key = atoi(argv[1]);

    printf("Key: %i\n", key);


    string s = get_string("Texto plano: ");

    printf("Cyphertext: ");

    for(int i = 0; i < strlen(s); i++) {

        if( !isalpha(s[i])){
            // En caso de no ser una letra
            printf("%c", s[i]);
        } else{
            // De lo contrario
            int ascii_offset;

            if(isupper(s[i])){
                ascii_offset = MAYUS;
            }else{
                ascii_offset = MINUS;
            }

            int n = s[i] - ascii_offset;

            int encrypted_n = (n + key) % 26;

            char a = (n + ascii_offset + key);

            printf("%c", a);
        }

    }
    printf("\n");
    return 0;

}