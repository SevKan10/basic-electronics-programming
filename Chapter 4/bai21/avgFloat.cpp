#include <stdio.h>

int flag = 0;
float num, avg, sum = 0;

int main(){

    while(1){
        printf("Nhap vao so thuc (-1 de ket thuc): "); scanf("%f", &num);
        if(num == -1){
            break;
        }
        sum += num;
        flag++;
    }

    if(flag > 0){
        avg = sum / flag;
        printf("Trung binh cong cua cac so thuc duoc nhap vao la: %.2f", avg);
    } else{
        printf("Khong co so thuc nao duoc nhap vao");
    }
    return 0;
}