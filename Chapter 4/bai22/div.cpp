#include <stdio.h>

int a, b, flag = 0;

int main(){

    printf("Nhap vao so nguyen a: "); scanf("%i", &a);
    printf("Nhap vao so nguyen b: "); scanf("%i", &b);

    if(b == 0 ){
        printf("Loi phep toan, thu lai\n");
        return main();
    }

    while(a >=b){
        a -= b;
        flag++;
    }

    printf("Ket qua cua phep chia nguyen la: %i", flag);
    printf("\nKet qua cua phep chia du la: %i", a);

    return 0;
}