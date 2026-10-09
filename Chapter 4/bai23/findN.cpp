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
    printf("Gia tri n la: %i", flag);
    return 0;
}