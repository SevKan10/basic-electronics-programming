#include <stdio.h>

int numArr[3];
int max;

int main(){
	
	printf("FIND MAX NUMBER\n");
	
	for(int i = 0; i < 3; i++){
		printf("Enter number %i: ", i+1);
		scanf("%i", &numArr[i]);
	}
	
	max = numArr[0];
	for(int i = 0; i < 3; i++){
		if (numArr[i] > max){
			max = numArr[i];
		}
	}	
	printf("Number max: %i", max);
	return 0;	
}
