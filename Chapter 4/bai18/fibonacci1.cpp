#include <stdio.h>

int main(){
    long long n, a = 0, b = 1, c;

    printf("Nhap so n: "); scanf("%lld", &n);

    printf("Day Fibonacci: ");
    for (int i = 0; i < n; i++){
        if (i <= 1){
            c = i;
        } else {
            c = a + b;
            a = b;
            b = c;
        }
        printf("%lld ", c);
    }
    return 0;
}
