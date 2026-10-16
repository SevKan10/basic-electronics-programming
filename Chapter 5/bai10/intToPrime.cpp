#include <stdio.h>

int process(int n){
    int i = 2;
    while (n>1){
        if (n % i == 0){
            printf("%d", i);
            n /= i;
            if (n > 1) printf(" * ");
        }
        else i++;
    } 
    return 0;
}

int main(){
    int num;
    printf("Nhap vao so nguyen duong: "); scanf("%d", &num);
    if (num < 2) printf("So nhap vao khong hop le");
    else process(num);

    return 0;
}