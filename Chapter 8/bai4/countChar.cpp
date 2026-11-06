#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void enterString(char *s){
    printf("Enter your String: "); fgets(s, 100, stdin);
}

void countChar(const char *s) {
    int count[256] = {0}; 

    for (int i = 0; i < strlen(s); i++) {
        unsigned char ch = (unsigned char)*(s + i); // Lấy ký tự tại vị trí i
        count[ch]++;
    }

    printf("\nCharacter frequency:\n");
    for (int i = 0; i < strlen(s); i++) {
        unsigned char ch = (unsigned char)*(s + i);
        
        // Nếu ký tự này chưa bị đánh dấu là đã in (count > 0)
        if (count[ch] > 0) {
            if (ch == ' ') {
                printf("' ': %d\n", count[ch]);
            } else {
                printf("%c: %d\n", ch, count[ch]);
            }
            count[ch] = 0; 
        }
    }
}

int main(){

    char *string;

    string = (char*)malloc(100);

    enterString(string);
    countChar(string);

    free(string);
    string = NULL;
    return 0;
}