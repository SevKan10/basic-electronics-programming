/*
9. Viết chương trình nhập vào họ và tên của một người, cắt bỏ các khoảng trống không
cần thiết (nếu có), tách tên ra khỏi họ và tên, in tên lên màn hình. Chú ý đến trường
hợp cả họ và tên chỉ có một từ.
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

const char *getLastName(const char *fullName) {
    const char *lastName = fullName;

    for (const char *current = fullName; *current != '\0'; ++current) {
        if (*current == ' ') {
            lastName = current + 1;
        }
    }

    return lastName;
}

int main() {
    char fullName[100];

    printf("Enter your full name: ");
    if (fgets(fullName, sizeof(fullName), stdin) == NULL) {
        fprintf(stderr, "Unable to read the name.\n");
        return 1;
    }

    fullName[strcspn(fullName, "\r\n")] = '\0';
    normalizeSpaces(fullName);

    if (fullName[0] == '\0') {
        fprintf(stderr, "The name cannot be empty.\n");
        return 1;
    }

    printf("Name: %s\n", getLastName(fullName));
    return 0;
}