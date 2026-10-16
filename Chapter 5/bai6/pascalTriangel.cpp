#include <stdio.h>

int rows;

int pascal(int K,  int N){
    if (K == 0 || K == N) return 1;
    else return pascal(K - 1, N - 1) + pascal(K, N - 1);
}

int main(){

    printf("Nhap vao so hang: "); scanf("%d", &rows);

    for(int n = 0; n < rows; n++){
        for(int k = 0; k <= n; k++){
            printf("%d ", pascal(k, n));
        }
        printf("\n");
    }

    return 0;
}