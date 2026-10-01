#include <stdio.h>
#include <math.h>

float a, b, x;

int main(){

	printf("TINH PHUONG TRINH BAC 1 ax+b = 0 \n");
	
	printf("Nhap he so a: "); scanf("%f",&a);
	printf("Nhap he so b: "); scanf("%f",&b);
	
	if (a == 0 && b != 0){
		printf("!!!Phuong trinh vo nghiem!!!\n");
		printf("            Thu lai\n");
		
		return main();
	} else if (a == 0 && b == 0){
		printf("Phuong trinh co vo so nghiem\n"); 
		return main();
	} else{
		x = -b/a;
		printf("Nghiem cua phuong trinh la: %.2f", x);
	}

	return 0;	
}
