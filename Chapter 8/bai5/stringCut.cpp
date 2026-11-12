/*
5. Viết chương trình nhập vào một chuỗi.Lập trình căn bản
Trang 97
- In ra màn hình từ bên trái nhất và phần còn lại của chuỗi. Ví dụ: “Nguyễn Văn
Minh” in ra thành:
Nguyễn
Văn Minh
- In ra màn hình từ bên phải nhất và phần còn lại của chuỗi. Ví dụ: “Nguyễn
Văn Minh” in ra thành:
Minh
Nguyễn Văn
 */

#include <stdio.h>
#include <string.h>
#include <ctype.h>

void enterString(char *s, int maxSize) {
    printf("Enter your string: ");
    if (fgets(s, maxSize, stdin) != NULL) {
        s[strcspn(s, "\r\n")] = '\0';
        int length = strlen(s);
        while (length > 0 && isspace((unsigned char)s[length - 1])) {
            s[--length] = '\0';
        }
    } else {
        s[0] = '\0';
    }
}

const char *skipWhitespace(const char *s) {
    while (*s != '\0' && isspace((unsigned char)*s)) {
        ++s;
    }
    return s;
}

void printLeftmostWordAndRest(const char *s) {
    const char *wordStart = skipWhitespace(s);
    const char *wordEnd = wordStart;

    while (*wordEnd != '\0' && !isspace((unsigned char)*wordEnd)) {
        ++wordEnd;
    }

    printf("%.*s\n", (int)(wordEnd - wordStart), wordStart);
    printf("%s\n", skipWhitespace(wordEnd));
}

void printRightmostWordAndRest(const char *s) {
    const char *begin = skipWhitespace(s);
    const char *end = begin + strlen(begin);

    while (end > begin && isspace((unsigned char)end[-1])) {
        --end;
    }

    const char *wordStart = end;
    while (wordStart > begin && !isspace((unsigned char)wordStart[-1])) {
        --wordStart;
    }

    const char *restEnd = wordStart;
    while (restEnd > begin && isspace((unsigned char)restEnd[-1])) {
        --restEnd;
    }

    printf("%.*s\n", (int)(end - wordStart), wordStart);
    printf("%.*s\n", (int)(restEnd - begin), begin);
}

int main() {
    char string[100];

    enterString(string, 100);

    printf("\nLeftmost word and the rest:\n");
    printLeftmostWordAndRest(string);

    printf("\nRightmost word and the rest:\n");
    printRightmostWordAndRest(string);
    return 0;
}