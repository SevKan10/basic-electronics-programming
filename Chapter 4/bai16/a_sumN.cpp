#include <stdio.h>

int n;
unsigned long long sum = 0;

int main(){
    
    printf("ENTER NUMBER n: "); scanf("%i", &n);
    
    for (int i=0; i<=n; i++){ sum +=i;}
    //sum = (n*1*(n+1))/2;
    
    printf("SUM= %llu",sum);
    
	return 0;	
}
