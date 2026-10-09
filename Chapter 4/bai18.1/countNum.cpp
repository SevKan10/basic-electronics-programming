#include <stdio.h>

int num, flag = 0;
int a[100];

int main(){
    printf("Nhap vao so nguyen n: "); scanf("%i", &num);

    while(num >0){
        a[flag] = num % 10;
        num /= 10;
        flag++;
    }

    printf("Co tong cong %i chu so\n", flag);

    printf("Cac chu so cua so nguyen n la: ");
    for(int i = flag - 1; i >= 0; i--){
        printf("%i ", a[i]);
    }
    return 0;
}