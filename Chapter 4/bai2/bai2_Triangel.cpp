#include <stdio.h>
#include <math.h>

float a, b, c;
float cv, p, s;

int main(){

	printf("CAL TRIANGLE\n");
	
	printf("Enter edge a: ");
	scanf("%f", &a);
	printf("Enter edge b: ");
	scanf("%f", &b);
	printf("Enter edge c: ");
	scanf("%f", &c);
	
	if((a+b) > c && (a+c) > b && (b+c) > a){
		cv = a + b + c;
		p = cv/2;
		s = sqrt(p*(p-a)*(p-b)*(p-c));
		
		printf("\n");
		printf("Chu vi hinh tam giac: %.2f\n", cv);
		printf("Dien tich hinh tam giac: %.2f", s);
		
	}else{
		printf("!!!Not become triangle!!!\n");
		printf("    Please try again\n");
		return main();
	}
	
	return 0;
}
