#include <stdio.h>

int day, month, year, nextDay, nextMonth, nextYear;

int checkDay(int d, int m, int y){
    if(d < 1 || d > 31 || m < 1 || m > 12 || y < 0){
        printf("Ngay thang nam khong hop le");
        return 1;
    } else if((m == 4 || m == 6 || m == 9 || m == 11) && d > 30){
        printf("Ngay thang nam khong hop le");
        return 1;
    } else if(m == 2){
        if((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)){
            if(d > 29){
                printf("Ngay thang nam khong hop le");
                return 1;
            }
        } else {
            if(d > 28){
                printf("Ngay thang nam khong hop le");
                return 1;
            }
        }
    } else if(d > 31){
        printf("Ngay thang nam khong hop le");
        return 1;
    }
    return 0;
}

int main(){

    printf("Nhap ngay: "); scanf("%i", &day);
    printf("Nhap thang: "); scanf("%i", &month);    
    printf("Nhap nam: "); scanf("%i", &year);

    if(checkDay(day, month, year) == 1){
        return 1;
    }
    if(day == 31 && month == 12){
        nextDay = 1;
        nextMonth = 1;
        nextYear = year + 1;
    } else if(day == 31 && (month == 4 || month == 6 || month == 9 || month == 11)){
        nextDay = 1;
        nextMonth = month + 1;
        nextYear = year;
    } else if(day == 28 && month == 2){
        if((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)){
            nextDay = 29;
            nextMonth = month;
            nextYear = year;
        } else {
            nextDay = 1;
            nextMonth = month + 1;
            nextYear = year;
        }
    } else {
        nextDay = day + 1;
        nextMonth = month;
        nextYear = year;
    }

    printf("Ngay tiep theo la: %i/%i/%i\n", nextDay, nextMonth, nextYear);
    return 0;
}