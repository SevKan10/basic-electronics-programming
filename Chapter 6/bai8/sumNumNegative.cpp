#include <stdio.h>
#include <math.h>

#define MAX 100

int sumNumNegative(int inputNum[], int m) {
    int sum = 0;
    for (int i = 0; i < m; i++) {
        if (inputNum[i] < 0) {
            sum += inputNum[i];
        }
    }
    return sum;
}

void enterNum(int inputNum[], int m) {
    for (int i = 0; i < m; i++) {
        printf("Enter element a[%d]: ", i);
        scanf("%d", &inputNum[i]);
    }
}

int main() {
    int inputNum[100];
    int m;

    printf("Enter the number of elements: ");   scanf("%d", &m);

    enterNum(inputNum, m);

    int sumNegative = pow(sumNumNegative(inputNum, m),2);

    printf("Sum^2 of negative numbers: %d\n", sumNegative);

    return 0;
}