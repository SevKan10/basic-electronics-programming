#include <stdio.h>

int hour, minute, second;

int main(){
    printf("Nhap thoi gian cua ban (hh:mm:ss): "); scanf("%d:%d:%d", &hour, &minute, &second);
    printf("Thoi gian cua ban la: %02d:%02d:%02d", hour, minute, second+1);
    return 0;
}