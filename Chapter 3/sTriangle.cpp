#include <stdio.h>
#include <math.h>

//float a, b, c;
float a[3];

int main(){
	
	float cv  =0;
	float s = 0;
	float p = 0;
	float temp = 1;
	
	printf("CALCULATE YOUR TRIANGLE\n");
	
	for (int i = 0; i < 3; i++){
		printf("Enter your number %i: \t", i+1);
		scanf("%f", &a[i]);
	}
	
	for (int i = 0; i < 3; i++){cv += a[i];}
	
	p = cv / 2;
	
	for (int i = 0; i < 3; i++){temp *= p-a[i];}

	s = sqrt(p*temp);
	
	printf("Chu vi hinh tam giac: %f\n", cv);
	printf("Dien tich hinh tam giac: %f", s);
	
	return 0;
}
