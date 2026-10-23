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

// void printMatrix(int matrix[MAX][MAX], int m, int n) {
//     printf("Matrix:\n");
//     printf("| ");
//     for (int i = 0; i < m; i++){
//         for (int j = 0; j < n; j++){
//             printf("%d | ", matrix[i][j]);
//             if (j == n - 1)    printf("\n");
//         }
//         printf("\n");
//     }
// }

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

void findNum(int matrix[MAX][MAX], int m, int n, int num) {
    int place[MAX][2]; // Mảng lưu trữ vị trí của các phần tử tìm thấy
    int el = 0, found = 0;
    printf("Positions of %d in the matrix:\n", num);
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (matrix[i][j] == num) {
                place[el][0] = i;
                place[el][1] = j;
                el++;
                found = 1;
            }
        }
    }
    if (!found) {
        printf("%d not found in the matrix.\n", num);
    } else {
        for (int k = 0; k <= el-1; k++) {
            printf("Found at position: (%d, %d)\n", place[k][0], place[k][1]);
        }
        printf("Element number %d in the matrix.\n", el);
    }
}

int main() {
    int a[MAX][MAX];
    int m, n;
    
    enterColsRows(m, n);
    enterMatrix(a, m, n);
    printMatrix(a, m, n);

    int num;
    printf("Enter a number to search for: ");
    scanf("%d", &num);

    findNum(a, m, n, num);

    return 0;
}