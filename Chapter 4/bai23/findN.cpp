#include <stdio.h>

int S, flag = 1;
float sum = 0;

int main(){

    printf("Nhap vao so nguyen duong n: "); scanf("%i", &S);

    while (S > 0) {
        sum = sum + 1.0/flag;
        if (sum >= S) {break;}
        flag++;
    }
    printf("Tong cua day so 1/1 + 1/2 + 1/3 + ... + 1/n >= %.2f\n", sum);
    printf("Gia tri n la: %i", flag);
    return 0;
}