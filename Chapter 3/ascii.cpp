#include <stdio.h>
#include <math.h>

char letter;

int main(){
	printf("HAY NHAP 1 KY TU BAT KI\n");
	scanf("%c",&letter);
	
	printf("Ma ASCII la: %i\n", letter);
	
	int nextLetter = (int)letter + 1;
	printf("Chu ke tiep la: %c", nextLetter);
	
	return 0;
}
