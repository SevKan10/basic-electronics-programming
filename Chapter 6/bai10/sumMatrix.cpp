#include <stdio.h>
#include <math.h>

#define MAX 100

void enterMatrix(int matrix[MAX][MAX], int m, int n, int matrixNumber) {
    printf("Enter the matrix %d:\n", matrixNumber);

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int m, int n, int matrixNumber) {
    printf("\nMATRIX TABLE %d\n", matrixNumber);

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

int sumMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }
    return 0;
}

int main(){
    int matrix1[MAX][MAX], matrix2[MAX][MAX], result[MAX][MAX];
    int m, n;

    printf("Enter the number of rows: ");   scanf("%d", &m);
    printf("Enter the number of columns: ");   scanf("%d", &n);

    enterMatrix(matrix1, m, n, 1);
    enterMatrix(matrix2, m, n, 2);

    printMatrix(matrix1, m, n, 1);
    printMatrix(matrix2, m, n, 2);     

    sumMatrix(matrix1, matrix2, result, m, n);
    printf("Result:");
    printMatrix(result, m, n, 3);

    return 0;
}