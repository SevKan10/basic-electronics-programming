#include <stdio.h>

char letter;

int main(){

    printf("Nhap ky tu cua ban: "); scanf("%c", &letter);

    if (letter >= 'A' && letter <= 'Z'){
        printf("Ky tu %c thuoc (A-Z) la chu hoa", letter);
    } else if (letter >= 'a' && letter <= 'z'){
        printf("Ky tu %c thuoc (a-z) la chu thuong", letter);
    } else if (letter >= '0' && letter <= '9'){
        printf("Ky tu %c la so", letter);
    } else {
        printf("Ky tu %c la ky tu dac biet", letter);
    }
    return 0;
}