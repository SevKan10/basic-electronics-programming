#include <stdio.h>

int enterNum(int a[]){
    int number;
    printf("Enter number n: "); scanf("%d", &number);

    for (int i = 0; i < number; i++){
        printf("Enter number %d: ", i+1);
        scanf("%d", &a[i]);
    }
    return number;
}

void processNum(int a[], int n){
    int min = a[0], max = a[0], sum = 0;
    for (int i = 0; i <= n-1; i++){
        // if (a[i] == min || a[i] == max){
        //     continue;
        // }
        if (a[i] < min){
            min = a[i];
        }
        if (a[i] > max){
            max = a[i];
        }
        sum += a[i];
    }
    printf("Min: %d\n", min);
    printf("Max: %d\n", max);
    printf("Sum: %d\n", sum);
}

int main(){
    int a[100];
    int n;
    n = enterNum(a);

    processNum(a, n);

    return 0;
}