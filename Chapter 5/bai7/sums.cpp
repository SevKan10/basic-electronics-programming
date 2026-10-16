#include <stdio.h>
#include <math.h>

int x, n;

float aSum(int X, int N){
    float sum = 1;
    for(int i = 1; i <= X; i++){sum += pow(i, N);}
    return sum;
}

float bSum(int X, int N){
    float sum = 0;
    if (X != -1)sum = (1-pow(-X, N+1))/(1+X);
    else return 0; 
    return sum;
}

float cSum(int X, int N){return exp(X);}

int main(){
    printf("Nhap vao so x: "); scanf("%d", &x);
    printf("Nhap vao so n: "); scanf("%d", &n);

    printf("Ket qua cau a: %.2f\n", aSum(x, n));
    printf("Ket qua cau b: %.2f\n", bSum(x, n));
    printf("Ket qua cau c: %.2f\n", cSum(x, n));
    return 0;
}