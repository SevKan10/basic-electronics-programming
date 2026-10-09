#include <stdio.h>

int main(){
    char input;
    int value;

    printf("Nhap ky tu thuoc he thap luc phan: ");
    if (scanf(" %c", &input) != 1) {
        printf("Khong doc duoc ky tu");
        return 1;
    }
    //printf("giá trị%i\n", (int)input-'a'); kiểm tra thử thuật toán: giá trị của ký tự a là 0, với input = 'b'
    if (input >= '0' && input <= '9') {
        value = input - '0';
        printf("Ky tu %c thuoc (0-9) la so thap phan %d", input, value);
    } else if (input >= 'A' && input <= 'F') {
        value = input - 'A' + 10;
        printf("Ky tu %c thuoc (A-F) la so thap phan %d", input, value);
    } else if (input >= 'a' && input <= 'f') {
        value = input - 'a' + 10;
        printf("Ky tu %c thuoc (a-f) la so thap phan %d", input, value);
    } else {
        printf("Ky tu %c khong thuoc he thap luc phan", input);
    }

    return 0;
}