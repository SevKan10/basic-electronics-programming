#include <stdio.h>

int getMonth(int month, int nhuan){
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
        return 31;
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11){
        return 30;
    }
    else if (month == 2){
        if (nhuan == 1){
            return 29;
        }   
        return 28;
    }
}

int getYear(int year){
    if (year %4 == 0 && year %100 != 0 || year %400 == 0){ 
    // year % 100 !=0 do là năm tròn thế kỷ nhưng theo quy tắc năm tròn thê kỷ thì ko nhuận
    //year %400 == 0 do là năm tròn thế kỷ nhưng theo quy tắc năm tròn thê kỷ thì nhuận
        return 1;
    }
    else{
        return 0;
    }
}


int main(){
	int day, month, year, totalDay;
	printf("HAY NHAP NGAY, THANG VA NAM CUA BAN:\n");
	
	printf("Hay nhap ngay: "); scanf("%i", &day);
	printf("Hay nhap thang: "); scanf("%i", &month);
	printf("Hay nhap nam: "); scanf("%i", &year);

    //printf("%i", getMonth(month, getYear(year)));
    if(day < 1 || day > getMonth(month, getYear(year))){
        printf("\t >Ngay khong hop le\n");
        return main();
    } else if (month < 1 || month > 12){
        printf("\t >Thang khong hop le\n");
        return main();
    } else if (year < 0){
        printf("\t >Nam khong hop le\n");
        return main();
    }

    if (getYear(year) == 1){totalDay = 366;} 
    else { totalDay = 365;}
    
    printf("\n");
    printf("Ngay %i thang %i nam %i\t >>HOP LE\n", day, month, year);
    printf("Ngay %i thang %i nam %i co %i ngay\n", day, month, year, totalDay);
	

    return 0;
}
