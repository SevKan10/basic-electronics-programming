#include <stdio.h>

int enterNum(int a[]){
    int number;
    printf("Enter number n: "); scanf("%d", &number);

    if (number > 0){
        printf("Enter number 1: ");
        scanf("%d", &a[0]);
    }

    for (int i = 1; i < number; i++){
        do{
            printf("Enter number %d: ", i + 1); scanf("%d", &a[i]);
            if (a[i] <= a[i-1]){
                printf("Please enter a number greater than the previous one!\n");
            }
        } while (a[i] <= a[i-1]);
    }
    return number;
}

void printNum(int a[], int n){
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void insertNum(int a[], int n){
    int x; 
    printf("Enter number to insert: "); scanf("%d", &x);

    int i = n - 1;
    while (i >= 0 && a[i] > x){
        a[i + 1] = a[i];
        i--;
    }
    a[i + 1] = x;
    n++;
    printNum(a, n);
}

int main(){
    int a[100];
    int n;
    n = enterNum(a);

    printNum(a, n);
    insertNum(a, n);

    return 0;
}