#include <stdio.h>

unsigned long long n;
double temp = 0, sum = 0;

int main(){
	
	printf("ENTER NUMBER n: "); scanf("%llu", &n);
	
	for (int i = 1; i <= n+1; i++){
		temp += (double)1/i; 	//ép ki?u do i thu?c int
		//printf("i= %i\t",i );
		//printf("Temp= %.2lf\n", temp);
	}
	
	sum += n+1 - temp;
	printf("SUM= %.2lf", sum);
	
	return 0;
}
