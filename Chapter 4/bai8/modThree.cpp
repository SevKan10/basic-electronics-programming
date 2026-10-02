#include <stdio.h>

int main() {
    int n, sum = 0;

    printf("Nhap so nguyen duong n(co 3 chu so): "); scanf("%d", &n);
    
    int tram, chuc, donVi;
    tram = n / 100;          // Lấy chữ số hàng trăm
    chuc = (n / 10) % 10;    // Lấy chữ số hàng chục
    donVi = n % 10;          // Lấy chữ số hàng đơn vị

    sum = tram + chuc + donVi; // Tính tổng các chữ số

    if (sum % 3 ==0){
        printf("Tong cac chu so cua n chia het cho 3");
    } else {
        printf("Tong cac chu so cua n khong chia het cho 3");
    }

    return 0;
}