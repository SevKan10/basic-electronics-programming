#include <stdio.h>


int fact(int n){
    if (n == 0 || n == 1) return 1;
    else return n * fact(n - 1);
}

int pascal(int K,  int N){
    return fact(N) / (fact(K) * fact(N - K));
}

int main(){
    int rows;
    printf("Nhap vao so hang: "); scanf("%d", &rows);

    for(int n = 0; n < rows; n++){
        for(int k = 0; k <= n; k++){
            printf("%d ", pascal(k, n));
        }
        printf("\n");
    }

    return 0;
}