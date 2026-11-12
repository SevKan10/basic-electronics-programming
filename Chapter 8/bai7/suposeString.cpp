/*
7. Viết chương trình nhập vào một chuỗi, in ra chuỗi đảo ngược của nó theo từng từ.
Ví dụ : chuỗi “Nguyễn Văn Minh” đảo thành “Minh Văn Nguyễn”
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void enterString(char *string, int maxSize) {
    printf("Enter your string: ");
    if (fgets(string, maxSize, stdin) != NULL) {
        string[strcspn(string, "\r\n")] = '\0';
    } else {
        string[0] = '\0';
    }
}

void printWordsInReverse(char *string) {
    char *words[100];
    int wordCount = 0;
    char *current = string;

    while (*current != '\0') {
        while (*current != '\0' &&
               isspace((unsigned char)*current)) {
            ++current;
        }

        if (*current == '\0') {
            break;
        }

        words[wordCount++] = current;
        while (*current != '\0' &&
               !isspace((unsigned char)*current)) {
            ++current;
        }

        if (*current != '\0') {
            *current = '\0';
            ++current;
        }
    }

    for (int i = wordCount - 1; i >= 0; --i) {
        printf("%s%s", words[i], i == 0 ? "\n" : " ");
    }
}

int main() {
    char string[100];

    enterString(string, sizeof(string));
    printWordsInReverse(string);

    return 0;
}