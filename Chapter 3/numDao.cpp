#include <stdio.h>

int number;
int numDao = 0;

int main(){
	
	printf("Nhap so cua ban: ");
	scanf("%i", &number);
	
	while (number > 0){
		numDao = numDao * 10 + number % 10;
		number /= 10;
	}
	
	printf("So dao la: %i", numDao);
	
	return 0;
}
