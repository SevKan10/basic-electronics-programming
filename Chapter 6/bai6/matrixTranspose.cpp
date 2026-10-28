#include <stdio.h>

#define MAX 100

int enterMatrix(int matrix[MAX][MAX], int m, int n) {
    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("Enter element a[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    return 0;
}

void enterColsRows(int &m, int &n) {
    printf("Enter number of rows (m): "); scanf("%d", &m);
    printf("Enter number of columns (n): "); scanf("%d", &n);
}

void printMatrix(int matrix[MAX][MAX], int m, int n) {
    int matrixTranspose[MAX][MAX];

    printf("\nMATRIX TRANSPOSE TABLE\n");

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrixTranspose[j][i] = matrix[i][j];
        }
    }

    printf("+");
    for (int j = 0; j < n; j++) {
        printf("------+"); 
    }
    printf("\n");

    for (int i = 0; i < m; i++) {
        printf("|"); // Viền dọc bên trái cùng
        for (int j = 0; j < n; j++) {
            printf(" %4d |", matrixTranspose[i][j]); 
        }
        printf("\n");

        printf("+");
        for (int j = 0; j < n; j++) {
            printf("------+");
        }
        printf("\n");
    }
}


int main() {
    int a[MAX][MAX];
    int m, n;
    
    enterColsRows(m, n);
    enterMatrix(a, m, n);
    printMatrix(a, m, n);

    return 0;
}