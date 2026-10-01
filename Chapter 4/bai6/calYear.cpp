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
	int month, year;
	printf("HAY NHAP THANG VA NAM CUA BAN:\n");
	
	printf("Hay nhap thang: "); scanf("%i", &month);
	printf("Hay nhap nam: "); scanf("%i", &year);
	
	getYear(year);
	getMonth(month, getYear(year));
	printf("\n");
    printf("Thang %i nam %i co %i ngay\n", month, year, getMonth(month, getYear(year)));
	

    return 0;
}
