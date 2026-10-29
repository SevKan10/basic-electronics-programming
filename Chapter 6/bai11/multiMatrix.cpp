#include <stdio.h>
#include <math.h>


#define MAX 100

void enterMatrix(int matrix[MAX][MAX], int m, int n, char* matrixNumber) {
    printf("Enter the matrix %s:\n", matrixNumber);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX][MAX], int m, int n, char* matrixNumber) {
    printf("\nMATRIX TABLE %s\n", matrixNumber);

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

int multiMatrix(int matrix1[MAX][MAX], int matrix2[MAX][MAX], int result[MAX][MAX], int m, int n, int k) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            result[i][j] = 0;
            for (int l = 0; l < k; l++) {
                result[i][j] += matrix1[i][l] * matrix2[l][j];
            }
        }
    }
    return 0;
}

int main() {
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX]; //hàng trước cột sau
    int m , n , k;

    printf("Enter rows for matrix a: ");   scanf("%d", &m);
    printf("Enter columns for matrix a ~ rows of b: ");   scanf("%d", &k);
    printf("Enter columns for matrix b: ");   scanf("%d", &n);

    enterMatrix(a, m, k, "a");
    printMatrix(a, m, k, "a");
    enterMatrix(b, k, n, "b");
    printMatrix(b, k, n, "b");

    multiMatrix(a, b, c, m, n, k);
    printMatrix(c, m, n, "c");

    return 0;
}