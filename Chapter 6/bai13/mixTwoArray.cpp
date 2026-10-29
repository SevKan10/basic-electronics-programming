#include <stdio.h>

#define MAX 100

void mergeTwoArray(int a[], int b[], int c[], int n);

void enterNum(int a[], int n, int arrayNumber) {
    printf("\n--- Enter elements for array %d (must be strictly increasing) ---\n", arrayNumber);

    for (int i = 0; i < n; i++) {
        do {
            printf("Enter element a[%d]: ", i);
            scanf("%d", &a[i]);

            if (i > 0 && a[i] <= a[i-1]) {
                printf("Error: Please enter a number greater than %d!\n", a[i-1]);
            }
        } while (i > 0 && a[i] <= a[i-1]);
    }
}

void printNum(int a[], int n){
    printf("Array: ");
    for (int i = 0; i < n; i++){
        printf("%d ", a[i]);
    }
    printf("\n");
}

void mergeTwoArray(int a[], int b[], int c[], int n){
    int i = 0, j = 0, k = 0;

    while (i < n && j < n){
        if (a[i] < b[j]){
            c[k++] = a[i++]; // cộng rồi mới tăng i, k
        } else {
            c[k++] = b[j++];
        }
    }

    while (i < n){
        c[k++] = a[i++];
    }

    while (j < n){
        c[k++] = b[j++];
    }
}

int main(){
    int array1[MAX], array2[MAX], array3[MAX * 2];
    int number;
    printf("Enter number elements array: "); scanf("%d", &number);

    enterNum(array1, number, 1);
    enterNum(array2, number, 2);

    mergeTwoArray(array1, array2, array3, number);
    printNum(array3, number * 2);

    return 0;
}