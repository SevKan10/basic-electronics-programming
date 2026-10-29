#include <stdio.h>
#include <stdlib.h> // Thêm thư viện này để dùng hàm system()
#include <math.h>

#define MAX 100

// Hàm xóa màn hình console tương thích đa nền tảng
void clearScreen() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

// Hàm nhập ma trận kèm giao diện bảng live
void enterMatrix(int matrix[MAX][MAX], int m, int n, char* matrixNumber) {
    // 1. Khởi tạo tất cả phần tử về 0
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = 0;
        }
    }

    // 2. Tiến hành nhập dữ liệu từng ô
    for (int current_i = 0; current_i < m; current_i++) {
        for (int current_j = 0; current_j < n; current_j++) {
            
            clearScreen(); // Xóa màn hình trước khi vẽ lại bảng mới

            printf("================ ENTER MATRIX %s (%dx%d) ================\n", matrixNumber, m, n);

            // In viền trên
            printf("+");
            for (int j = 0; j < n; j++) printf("------+");
            printf("\n");

            // In nội dung bảng
            for (int i = 0; i < m; i++) {
                printf("|");
                for (int j = 0; j < n; j++) {
                    if (i == current_i && j == current_j) {
                        printf("  ?   |"); // Ô đang đợi người dùng nhập
                    } else {
                        printf(" %4d |", matrix[i][j]);
                    }
                }
                printf("\n+");
                for (int j = 0; j < n; j++) printf("------+");
                printf("\n");
            }

            // Nhập giá trị cho ô hiện tại
            printf("\nEnter element %s[%d][%d]: ", matrixNumber, current_i, current_j);
            scanf("%d", &matrix[current_i][current_j]);
        }
    }
    clearScreen(); // Dọn dẹp màn hình sau khi hoàn thành nhập 1 ma trận
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
    int a[MAX][MAX], b[MAX][MAX], c[MAX][MAX]; // hàng trước cột sau
    int m, n, k;

    printf("Enter rows for matrix a: ");                   scanf("%d", &m);
    printf("Enter columns for matrix a ~ rows of b: ");   scanf("%d", &k);
    printf("Enter columns for matrix b: ");               scanf("%d", &n);

    // Nhập và in Ma trận A
    enterMatrix(a, m, k, "a");
    
    // Nhập và in Ma trận B
    enterMatrix(b, k, n, "b");

    // Nhân và in kết quả
    multiMatrix(a, b, c, m, n, k);

    printf("\n================ RESULT ================\n");
    printMatrix(a, m, k, "a");
    printMatrix(b, k, n, "b");
    printMatrix(c, m, n, "c (a * b)");

    return 0;
}