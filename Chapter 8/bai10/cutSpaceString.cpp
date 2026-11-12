/*
10. Viết chương trình nhập vào họ và tên của một người, cắt bỏ các khoảng trắng bên
phải, trái và các khoảng trắng không có nghĩa trong chuỗi. In ra màn hình toàn bộ họ
tên người đó dưới dạng chữ hoa, chữ thường.
*/

#include <ctype.h>
#include <stdio.h>
#include <string.h>

void normalizeSpaces(char *string) {
    char *read = string;
    char *write = string;
    int needSpace = 0;

    while (*read != '\0' && isspace((unsigned char)*read)) {
        ++read;
    }

    while (*read != '\0') {
        if (isspace((unsigned char)*read)) {
            needSpace = 1;
        } else {
            if (needSpace && write != string) {
                *write++ = ' ';
            }
            *write++ = *read;
            needSpace = 0;
        }
        ++read;
    }

    *write = '\0';
}

void convertCase(char *string, int upper) {
    for (char *current = string; *current != '\0'; ++current) {
        unsigned char character = (unsigned char)*current;
        *current = (char)(upper ? toupper(character) : tolower(character));
    }
}

int main() {
    char name[100];
    char uppercaseName[100];
    char lowercaseName[100];

    printf("Enter your full name: ");
    if (fgets(name, sizeof(name), stdin) == NULL) {
        fprintf(stderr, "Unable to read the name.\n");
        return 1;
    }

    name[strcspn(name, "\r\n")] = '\0';
    normalizeSpaces(name);
    if (name[0] == '\0') {
        fprintf(stderr, "The name cannot be empty.\n");
        return 1;
    }

    strcpy(uppercaseName, name);
    strcpy(lowercaseName, name);
    convertCase(uppercaseName, 1);
    convertCase(lowercaseName, 0);

    printf("Uppercase: %s\n", uppercaseName);
    printf("Lowercase: %s\n", lowercaseName);
    return 0;
}