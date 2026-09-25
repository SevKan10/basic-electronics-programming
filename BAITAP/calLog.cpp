#include <stdio.h>
#include <math.h>

float a, x;
double logResult;

int main(){
	
	printf("CALCULATE LOG\n");
	printf("Nhap co so a\n");
	scanf("%f", &a);
	printf("Nhap so mu x \n");
	scanf("%f", &x);
	
	if ( x>0 && a>0 && a != 1 ){
		logResult = log(x)/log(a);
		printf("KET QUA LA: %.2lf", logResult);
	}
	else { printf("SAI GIA TRI THU LAI\n"); return main(); }
	
	
	return 0;
}
