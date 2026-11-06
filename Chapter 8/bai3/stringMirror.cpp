#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enterString(char *s){
    printf("Enter your String: "); fgets(s, 100, stdin);;
}

int checkMirror(char *s){
    int left = 0; 
    int right = strlen(s) - 1;

    while (left < right){
        if (*(s + left) != *(s + right))
        {
            return 0;
        }
        left++;
        right--;     
    }
    return 1;
}

int main(){

    char *string;

    string = (char*)malloc(100);

    enterString(string);
    if (checkMirror(string) == 0){
        printf("String<< %s >>is not mirror!!!", string);
    } else {
        printf("String<< %s >>is mirror!!!", string);
    }
    
    free(string);
    string = NULL;
    return 0;
}