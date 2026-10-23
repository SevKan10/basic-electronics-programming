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

void sortNum(int a[], int n){
    int temp;
    for (int i = 0; i <= n-1; i++){
        for(int j = 0; j <= n-1; j++){
            if (a[i] > a[j]){
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
}

void printNum(int a[], int n){
    printf("So tang dan: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
    printf("So giam dan: ");
    for (int i = n - 1; i >= 0; i--){
        printf("%d ", a[i]);
    }
    printf("\n");
}

int main(){
    
    int a[100];
    int n;
    
    n = enterNum(a);

    sortNum(a, n);
    printNum(a, n);

    return 0;
}