#include <stdio.h>
#include <math.h>

float a, b, c;

int main(){
	
	float cv = 0;
	float s = 0;
	float p = 0;
	
	printf("CALCULATE YOYUR TRIANGLE\n");
	printf("Nhap do dai 3 canh\n");
	scanf("%f %f %f", &a, &b, &c);
	
	cv = a + b + c;
	p = cv/2;
	s = sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("Chu vi hinh tam giac la: %f\n", cv);
	printf("Dien tich hinh tam giac la: %f", s);
	
	return 0;
}
