#include <stdio.h>
#include <math.h>

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
    int a, b;
    printf("Nhap vao so a(tu): "); scanf("%i", &a);
    printf("Nhap vao so b(mau): "); scanf("%i", &b);

    printf("Uoc chung lon nhat la: %i\n", gcd(a, b));
    printf("Boi chung nho nhat la: %i\n", lcm(a, b));

    if(gcd( abs(a), abs(b)) == 1) printf("Phan so toi gian");
    else printf("Phan so khong toi gian");


    return 0;
}