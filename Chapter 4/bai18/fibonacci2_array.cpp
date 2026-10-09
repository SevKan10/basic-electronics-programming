#include <stdio.h>

int solve(int num){
    long long fibo[num];
    for (int i = 0; i < num; i++){
        if (i <= 1){
            fibo[i] = i;
        } else {
            fibo[i] = fibo[i - 1] + fibo[i - 2];
        }
    }

    for (int i = 0; i < num; i++){
        printf("%lld ", fibo[i]);
    }
    printf("\n");
    return fibo[num - 1];
}

int main(){
    long long n;

    printf("Nhap so n: "); scanf("%lld", &n);

    printf("Day Fibonacci: ");
    solve(n);
    //long long result = solve(n);
   // printf("So Fibonacci thu %lld la: %lld\n", n, result);
    return 0;
    
}