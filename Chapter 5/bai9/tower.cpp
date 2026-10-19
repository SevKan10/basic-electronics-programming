#include <stdio.h>

int tower(int n){

}

int floor[100];
int f, base;

int vt[4];

int main(){

    printf("Nhap vao so tang: "); scanf("%d", &f);

    for (int i = 1; i < 3; i++){
        vt[i] = i;
    }
    
    printf(">>Toa nha co %d tang o %s", f, vt);
    base = f-(f-1);
    return 0;
}