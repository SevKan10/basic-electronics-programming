#include <stdio.h>
#include <math.h>

float res[3];
float result = 0;
float temp = 0;

int main(){
	
	printf("CALCULATE YOUR RESISTOR\n");
	
	for (int i = 0; i < 3; i++){
		printf("Nhap gia tri dien tro %i: ", i+1);
		scanf("%f", &res[i]);
	}
	for (int i = 0; i < 3; i++){
		temp += 1/res[i];
	}	
	
	result = 1/temp;
	
	printf("Gia tri tong tro la: %.2f", result);
	
	return 0;
}

