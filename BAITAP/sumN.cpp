#include <stdio.h>

int i, n, sum;

int main(){
    printf("enter num n:");
    scanf("%i",&n);

    if(n<=0){
        printf("n must be greater than 0");
        return 0;
    }
    
    sum = 0;
    for(int i =1; i<=n; i++){
        printf("\nenter num %i:", i);
        int ai;
        scanf("%i",&ai);
        sum+=ai;
    }
    printf("\nresult:%i", sum);

}