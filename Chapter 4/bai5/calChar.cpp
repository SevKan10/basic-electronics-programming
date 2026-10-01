#include <stdio.h>

char getChar() {
    char c;
    scanf("%c", &c);
    return c;
}

int main() {
    printf("Chon 1 trong cac ky tu sau: + - * /: ");
    char c = getChar();
    switch (c) {
        case '+':
            printf("a+b\n");
            break;
        case '-':
            printf("a-b\n");
            break;
        case '*':
            printf("a*b\n");
            break;
        case '/':
            printf("a/b\n");
            break;
        default:
            printf("Ky tu khong hop le!\n");
    }
    return 0;
}