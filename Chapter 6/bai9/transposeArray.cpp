#include <stdio.h>
#include <math.h>

#define MAX 100

void enterArray(int inputNum[MAX], int m) {
    for (int i = 0; i < m; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &inputNum[i]);
    }
}

int transposeArray(int inputNum[MAX], int m) {
    int transposed[MAX];
    printf("\nTransposed Array:\n");
    for (int i = m - 1; i >= 0; i--) {
        transposed[i] = inputNum[i];
        printf("%d ", transposed[i]);
    }
    return 0;
}

int main(){
    int inputNum[MAX];
    int m;

    printf("Enter the number of elements: ");   scanf("%d", &m);

    enterArray(inputNum, m);
    transposeArray(inputNum, m);

    return 0;
}
