#include <stdio.h>

int num[100];
int n;

int main(){
    printf("Nhap so phan tu cua mang: "); scanf("%i", &n);

    for (int i = 0; i<n ; i++){
        printf("Nhap so thu %i:", i+1); scanf("%i", &num[i]);
    }
    printf("\n");

    printf("Cac so trong mang la: ");
    for (int i = 0; i<n ; i++){
        printf("%i ", num[i]);
    }
    
    printf("\n");
    int max = num[0];
    for (int i = 0; i<n; i++){
        if(num[i] > max){
            max = num[i];
        }
    }

    printf("So lon nhat trong mang la: %i\n", max);
    printf("Vi tri cua so lon nhat trong mang la: ");
    for (int i = 0; i<n; i++){
        if (num[i] == max){
            printf("%i", i+1);
        }
    }    
    printf("\n");

    return 0;
}