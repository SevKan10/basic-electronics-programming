#include <stdio.h>

int rows;

int pascal(int K,  int N){
    if (K == 0 || K == N) return 1;
    else return pascal(K - 1, N - 1) + pascal(K, N - 1);
}

int main(){
    printf("Nhap vao so hang: "); scanf("%d", &rows);

    for(int n = 0; n < rows; n++){
        // 1. Vòng lặp in khoảng trắng để đẩy các số vào giữa
        // Hàng trên cùng in nhiều khoảng trắng nhất, giảm dần khi xuống dưới
        for(int space = 1; space <= rows - n; space++){
            printf("  "); // In 2 khoảng trắng cho mỗi bước để cân đối
        }
        
        // 2. Vòng lặp in các con số
        for(int k = 0; k <= n; k++){
            // Dùng %4d thay vì %d để mỗi số luôn chiếm không gian là 4 ký tự,
            // giúp các hàng không bị lệch khi xuất hiện số có 2-3 chữ số.
            printf("%4d", pascal(k, n));
        }
        printf("\n");
    }

    return 0;
}