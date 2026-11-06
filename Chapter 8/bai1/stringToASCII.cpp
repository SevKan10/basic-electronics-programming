#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
    
    char *string;
    string = (char*)malloc(100);

    printf("Enter your String: "); fgets(string, 100, stdin);;

    for (int i = 0; i < strlen(string); i++){
        printf("%d ", *(string + i));
    }

    free(string);
    string = NULL;
    return 0;
}