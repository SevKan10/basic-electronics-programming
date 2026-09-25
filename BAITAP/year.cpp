#include <stdio.h>
#include <math.h>

int day, month, year;

int main(){
	
	printf("Hay nhap ngay: ");
	scanf("%i", &day);
	printf("\nHay nhap thang: ");
	scanf("%i", &month);
	printf("\nHay nhap nam: ");
	scanf("%i", &year);
	
	year = year % 100;
	
	if(month > 12 || month < 0 || day > 31){
		printf("Gia tri khong ton tai\n");
		return main();
	} else if (month == 2 && day > 29){
		printf("Gia tri khong ton tai\n");
		return main();
	} else if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12 && day > 31){
		printf("Gia tri khong ton tai\n");
		return main();		
	} else if (month == 4 || month == 6 || month == 9 || month == 11 && day > 30){
		printf("Gia tri khong ton tai\n");
		return main();		
	} else {
		printf("%i / %i / %i", day, month, year);
	}

	return 0;
}
