#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

    char *string;

    string = (char*)malloc(100);

    printf("Enter your String: "); fgets(string, 100, stdin);

    printf("String reverse: ");
    for (int i = strlen(string); i >= 0; i--){
        printf("%c", *(string + i));
    }

    free(string);
    string = NULL;
    return 0;
}