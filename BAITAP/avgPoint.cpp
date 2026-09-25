#include <stdio.h>
#include <math.h>

float math, physic, chemis;
float result = 0;

int main(){
	
	printf("TINH TRUNG BINH\n");
	printf("Nhap diem Toan: ");
	scanf("%f", &math);
	printf("Nhap diem Ly: ");
	scanf("%f", &physic);	
	printf("Nhap diem Hoa: ");
	scanf("%f", &chemis);
	
	result = (math + physic + chemis)/3;
	
	printf("Diem trung binh la: %.2f", result);
	
	return 0;
}
