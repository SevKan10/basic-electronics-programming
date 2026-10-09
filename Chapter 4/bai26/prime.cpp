#include <stdio.h>
#include <math.h>

int n;

int checkPrime(int num){
    if (num < 2){return 0;}
    for (int i = 2; i <= sqrt(num); i++){
        if (num % i == 0){return 0;}
    }
    return 1;
}

int main(){

    printf("Nhap vao so nguyen n: "); scanf("%i", &n);

    if (n < 2){
        printf("So nguyen n khong phai la so nguyen to, thu lai\n");
        return main();
    }

    for (int i = 2; i <= n; i++){
        if (checkPrime(i) == 1){
            printf("So nguyen n la so nguyen to: %i\n", i);
        }
    }

    return 0;
}