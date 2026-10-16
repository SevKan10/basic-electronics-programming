#include <stdio.h>

int a, b, c, numMax;

int findNum(int num1, int num2, int num3){
    int max = num1;
    if ( num2 > max ) max = num2;
    if ( num3 > max ) max = num3;
    return max;
}

int main(){

    printf("Nhap vao so a: "); scanf("%i", &a);
    printf("Nhap vao so b: "); scanf("%i", &b);
    printf("Nhap vao so c: "); scanf("%i", &c);

    numMax = findNum(a, b, c);

    printf("So lon nhat la: %i", numMax);

    return 0;
}