#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enterString(char *s, int maxSize) {
    printf("Enter your String: "); fgets(s, maxSize, stdin);
}

void cutString(const char *src, char *dest, int start, int length) {
    int srcLen = strlen(src);
    
    if (start < 0 || start >= srcLen || length <= 0) {
        dest[0] = '\0';
        return;
    }

    strncpy(dest, src + start, length);
    dest[length] = '\0'; 
}

int main() {
    char *string = (char *)malloc(100 * sizeof(char));
    char *subString = (char *)malloc(100 * sizeof(char));

    enterString(string, 100);

    cutString(string, subString, 0, 5);

    printf("Result string: \"%s\"\n", subString);

    free(string);
    free(subString);
    string = NULL;
    subString = NULL;

    return 0;
}