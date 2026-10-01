#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int player, bot;

int main(){
	
	srand(time(0)); // seed cho hàm rand()
	
	printf("=== TRO CHOI KEO - BUA - BAO ===\n");
    printf("Chon lua cua ban:\n");
    printf("1. Keo\n");
    printf("2. Bua\n");
    printf("3. Bao\n");
    printf("Nhap lua chon cua ban (1-3): "); scanf("%i",&player);
    
    if (player < 1 || player > 3){
    	printf("\n");
		printf("Lua chon khong hop le! Vui long chon lai\n");
		printf("\n");
        return main();
	}
    switch(player){
    	case 1:
    		printf("Ban: Keo\n");
    		break;
		case 2:
			printf("Ban: Bua\n");
    		break;
    	case 3:
    		printf("Ban: Bao\n");
    		break;
    	default:
    		printf("DEFAULT\n");
	}

    bot = rand() % 3 + 1; // random số từ 1 tới 3
    
    switch(bot){
    	case 1:
    		printf("Bot: Keo\n");
    		break;
		case 2:
			printf("Bot: Bua\n");
    		break;
    	case 3:
    		printf("Bot: Bao\n");
    		break;
    	default:
    		printf("DEFAULT\n");
	}
    
    if (bot == player){printf("\n"); printf(">Ket qua: TRAN DAU HOA\n"); return main();}
    
    if ((player == 1 && bot ==3) || (player == 3 && bot ==2) || (player == 2 && bot ==1)){ 
    	printf("\n");
    	printf(">Ket qua: BAN DA CHIEN THANG......\n");
	} else{
		printf("\n");
		printf(">Ket qua: LEU LEU, BOT THANG, BAN THUA ROI......\n");
	}
    
    return 0;
}
