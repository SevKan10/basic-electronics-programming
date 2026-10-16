#include <stdio.h>

int printHang(char kytu[], int time){
    for (int i = 1; i <= time; i++){
        printf("%s", kytu);
    }
    return 0;
}

int main() {

    int hang1, hang2, hang3, hang4, hang5;
    printf("Nhap vao so luong hang o cua hang 1: "); ; scanf("%i", &hang1);
    printf("Nhap vao so luong hang o cua hang 2: ");  ; scanf("%i", &hang2);
    printf("Nhap vao so luong hang o cua hang 3: ");  ; scanf("%i", &hang3);
    printf("Nhap vao so luong hang o cua hang 4: ");  ; scanf("%i", &hang4);
    printf("Nhap vao so luong hang o cua hang 5: ");  ; scanf("%i", &hang5);

    printf("Hang 1: "); printHang("A!", hang1); printf("\n");
    printf("Hang 2: "); printHang("A@", hang2); printf("\n");    
    printf("Hang 3: "); printHang("A#", hang3); printf("\n");    
    printf("Hang 4: "); printHang("A$", hang4); printf("\n");    
    printf("Hang 5: "); printHang("A%", hang5); printf("\n");    
    return 0;
}