#include <stdio.h>

int num;

int checkDiv3(int Number){
    int sum = 0;
    while (Number > 0){
        sum += Number % 10;
        Number /= 10;
    }

    if (sum % 3 == 0) printf("So %d chia het cho 3", num);
    else printf("So %d khong chia het cho 3", num);

    return sum;
}

int main(){
    printf("Nhap vao so nguyen: "); scanf("%d", &num);

    checkDiv3(num);

    return 0;
}