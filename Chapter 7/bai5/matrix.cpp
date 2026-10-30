#include <stdio.h>
#include <stdlib.h>

void enterMatrix(int **a, int m, int n){
    printf("Enter Matrix\n");
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            printf("a[%d][%d] = ", i, j);
            scanf("%d", *(a + i) + j); // Tương đương &a[i][j]
        }
    }
}

void printMatrix(int **a, int m, int n){
    printf("Matrix Table\n");

    for (int i = 0; i < m; i++){
        for (int j = 0; j < n; j++){
            printf("a[%d][%d]: ", i, j);
            printf("%d ", *(*(a + i)+j));
        }
        printf("\n");
    }
}

void searchNum(int **arr, int rows, int cols, int x) {
    printf("Searching number %d:\n", x); // Thêm \n ở cuối
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (*(*(arr + i) + j) == x) {
                printf("a[%d][%d]: %d\n", i, j, x);
            } else {
                printf("Not found number %d in matrix", x);
            }
        }
    }
}

int main(){
    int **arr, rows, cols, x;

    printf("Enter rows: "); scanf("%d", &rows);
    printf("Enter cols: "); scanf("%d", &cols);

    if (rows <= 0 || cols <= 0){
        printf("Please try again!\n");
        return 1;
    }
    

    arr = (int**)malloc(rows*sizeof(int));

    if (arr == NULL){ printf("Memory allocation failed"); return 1;}

    for (int i = 0; i < rows; i++){
        *(arr + i) = (int*)malloc(cols*sizeof(int));
        if (*(arr + i) == NULL){ printf("Memory allocation failed"); return 1;}
    }

    enterMatrix(arr, rows, cols);
    printMatrix(arr, rows, cols);

    printf("\nNhap so nguyen x can tim: ");
    scanf("%d", &x);
    searchNum(arr, rows, cols, x);


    for (int i = 0; i < rows; i++) {
        free(*(arr + i));
    }
    free(arr); // Giải phóng con trỏ quản lý các hàng
    arr = NULL;

    return 0;
}