#include <stdio.h>

int sumP = 1, num;

int main(){

    printf("Nhap vao so nguyen n: "); scanf("%i", &num);

    for(int i = 1; i <= num; i++){
        sumP = sumP * 2 * i;
    }

    printf("Ket qua cua la: %d", sumP);
    return 0;
}