#include <stdio.h>

int num;
int clip[100];

int main(){

    printf("Nhap vao so nguyen n: "); scanf("%i", &num);
    int flag = 0;

    while(num > 0){
        clip[flag] = num % 10;
        num /= 10;
        flag++;
    }
    printf("so dao nguoc cua so nguyen n la: ");
    for(int i = 0; i < flag; i++){
        printf("%i", clip[i]);
    }
    return 0;
}