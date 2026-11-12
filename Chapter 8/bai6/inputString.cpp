/*
6. Viết chương trình nhập vào một chuỗi rồi xuất chuỗi đó ra màn hình dưới dạng mỗi
từ một dòng.
Ví dụ: “Nguyễn Văn Minh”
In ra :
Nguyễn
Văn
Minh
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

void printWords(const char *string) {
    const char *wordStart = string;

    while (*wordStart != '\0') {
        while (*wordStart != '\0' &&
               isspace((unsigned char)*wordStart)) {
            ++wordStart;
        }

        if (*wordStart == '\0') {
            break;
        }

        const char *wordEnd = wordStart;
        while (*wordEnd != '\0' &&
               !isspace((unsigned char)*wordEnd)) {
            ++wordEnd;
        }

        printf("%.*s\n", (int)(wordEnd - wordStart), wordStart);
        wordStart = wordEnd;
    }
}

int main() {
    char string[100];

    enterString(string, sizeof(string));
    printWords(string);

    return 0;
}