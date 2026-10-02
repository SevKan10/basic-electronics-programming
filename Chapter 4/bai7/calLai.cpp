#include <stdio.h>
#include <math.h>

int kiHan, timeMonth, numOfTimes1, numOfTimes2;
double sumHan1 = 0, sumHan3 = 0, sumOutHan = 0, r1 = 0.024, r3 = 0.04;
double money;
int main(){
	
	printf("HAY NHAP SO TIEN CUA BAN:	"); scanf("%lf", &money);
	printf("HAY NHAP SO THANG KI HAN(1 hoac 3):	"); scanf("%i", &kiHan);
	printf("HAY NHAP SO THANG BAN GUI:	"); scanf("%i", &timeMonth);	
	
	// XAC DINH NGOAI LE	
	if (money < 0){
		printf("\t >So tien khong hop le");
		return main();
	} else if (kiHan<1 || kiHan>3 ){
		printf("\t >So ki han khong hop le");
		return main();		
	}else if (timeMonth < 0 ){
		printf("\t >So ki thang khong hop le");
		return main();		
	}
	
	//TÍNH CHU KI
	numOfTimes1 = timeMonth / 3;
	numOfTimes2 = timeMonth % 3;
	
	// CONG THUC TINH LAI KEP
	// A = P*(1+r)^n
	// n: thoi gian gui(so lan tinh c?a ki han)
	// r: lai theo chu ki thoi gian (lai c?a 1 kì h?n)
	switch(kiHan){
		case 1:
			sumHan1 =  money*pow((1 + r1), timeMonth);
			printf("\t >Lai sau %i thang voi ki han 1 thang la: %.2lf", timeMonth, sumHan1);
			break;
		case 3:
			sumHan3 = money*pow((1+r3*3), numOfTimes1);
			if (numOfTimes2 < 3){
				sumOutHan = sumHan3*pow((1 + r1), numOfTimes2);
			}
			printf("\t >Lai sau %i thang voi ki han 3 thang la: %.2lf\n", timeMonth, sumHan3);
			printf("\t >Lai sau %i thang va ngoai han %i voi ki han 3 thang la: %.2lf", timeMonth, numOfTimes2, sumOutHan);
			break;
		default:
			printf("\t >Khong hop le");
	}
	
	return 0;
}
