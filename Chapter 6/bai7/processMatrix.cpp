#include <stdio.h>
#define MAX 100

int isPrime(int num) {
    if (num <= 1) return 0; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not prime
    }
    return 1; // Prime
}

int isnotPrime(int num) {
    if (num <= 1) return 1; // Not prime
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 1; // Not prime
    }
    return 0; // Prime
}

void enterMatrix(int inputNum[MAX], int m) {

    for (int i = 0; i < m; i++){
            printf("Enter element a[%d]: ", i);
            scanf("%d", &inputNum[i]);
    }
}

void printArray(int inputNum[MAX], int m) {
    printf("\nARRAY TABLE\n");

    printf("+");
    for (int j = 0; j < m; j++) {
        printf("------+"); 
    }
    printf("\n");

    printf("|"); // Viền dọc bên trái cùng
    for (int j = 0; j < m; j++) {
        printf(" %4d |", inputNum[j]); 
    }
    printf("\n");

    printf("+");
    for (int j = 0; j < m; j++) {
        printf("------+");
    }
    printf("\n");
}

void printMatrix(int matrix[MAX][MAX], int m, int n) {
    printf("\nMATRIX TABLE\n");

    printf("+");
    for (int j = 0; j < n; j++) {
        printf("------+"); 
    }
    printf("\n");

    for (int i = 0; i < m; i++) {
        printf("|"); // Viền dọc bên trái cùng
        for (int j = 0; j < n; j++) {
            printf(" %4d |", matrix[i][j]); 
        }
        printf("\n");

        printf("+");
        for (int j = 0; j < n; j++) {
            printf("------+");
        }
        printf("\n");
    }
}

void checkNum(int inputNum[MAX], int m) {
    int oddCount = 0, evenCount = 0, primeCount = 0, notPrimeCount = 0;

    // --- DÒNG 1: Số lẻ ---
    printf("Line 1 (Odd numbers): ");
    for (int i = 0; i < m; i++) {
        if (inputNum[i] % 2 != 0) {
            printf("%d ", inputNum[i]);
            oddCount++;
        }
    }
    printf("| Total: %d odd numbers\n", oddCount);

    // --- DÒNG 2: Số chẵn ---
    printf("Line 2 (Even numbers): ");
    for (int i = 0; i < m; i++) {
        if (inputNum[i] % 2 == 0) {
            printf("%d ", inputNum[i]);
            evenCount++;
        }
    }
    printf("| Total: %d even numbers\n", evenCount);

    // --- DÒNG 3: Số nguyên tố ---
    printf("Line 3 (Prime numbers): ");
    for (int i = 0; i < m; i++) {
        if (isPrime(inputNum[i])) {
            printf("%d ", inputNum[i]);
            primeCount++;
        }
    }
    printf("\n");

    // --- DÒNG 4: Không phải số nguyên tố ---
    printf("Line 4 (Not prime numbers): ");
    for (int i = 0; i < m; i++) {
        if (!isPrime(inputNum[i])) {
            printf("%d ", inputNum[i]);
            notPrimeCount++;
        }
    }
    printf("\n");
}

int main(){
    int inputNum[MAX];
    int m;

    printf("Enter number of elements (m): "); scanf("%d", &m);
    enterMatrix(inputNum, m);
    printArray(inputNum, m);
    checkNum(inputNum, m);

    return 0;
}