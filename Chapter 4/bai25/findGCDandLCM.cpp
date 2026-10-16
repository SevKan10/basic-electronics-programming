#include <stdio.h>
#include <math.h>

#define ll long long

ll a , b;

ll gcd(ll a, ll b){
    int r;
    if (a == 0 || b == 0) return a + b;
    
    while (b != 0){
        r = a % b;
        a = b;
        b = r;
    }
    return a;
}

ll lcm(ll a, ll b){
    return (a * b) / gcd(a, b);
}

int main(){

    printf("Nhap vao so nguyen a: "); scanf("%lld", &a);
    printf("Nhap vao so nguyen b: "); scanf("%lld", &b);

    printf("Uoc chung lon nhat cua %lld va %lld la: %lld\n", a, b, gcd(a, b));
    printf("Boi chung nho nhat cua %lld va %lld la: %lld\n", a, b, lcm(a, b));

    return 0;
}