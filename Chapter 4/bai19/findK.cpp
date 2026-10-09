#include <stdio.h>
#include <math.h>

int num, k;

int main(){

    printf("Nhap vao so n: "); scanf("%i", &num);

    k = log2(num) + 1;

    printf("So nguyen duong k nho nhat can tim la: %i", k);

    return 0;
}