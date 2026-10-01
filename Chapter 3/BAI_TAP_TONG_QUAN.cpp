#include <stdio.h>

// Hàm in s? nguyên ra 16-bit nh? phân
void printBinary16(int n) {
    for (int i = 15; i >= 0; i--) {
        int bit = (n >> i) & 1;
        printf("%d", bit);
        if (i % 4 == 0 && i != 0) printf(" "); // Cách m?i 4 bit cho d? d?c
    }
}

// Hàm in ký t? ra 8-bit nh? phân
void printBinary8(char c) {
    for (int i = 7; i >= 0; i--) {
        int bit = (c >> i) & 1;
        printf("%d", bit);
        if (i == 4) printf(" ");
    }
}

int main() {
    // ==========================================
    // BÀI 1:
    // ==========================================
    printf("=== BAI TAP 1 ===\n");
    
    int val1 = 12;
    int val2 = 255;
    int val3 = 31000;
    int val4 = 32767;
    int val5 = -32768;

    // a) 12
    printf("a) So 12:\n");
    printf("   - Nhi phan (16-bit): "); printBinary16(val1); printf("\n");
    printf("   - Bat phan:          %o\n", val1);
    printf("   - Thap luc phan:     0x%X\n\n", val1);

    // b) 255
    printf("b) So 255:\n");
    printf("   - Nhi phan (16-bit): "); printBinary16(val2); printf("\n");
    printf("   - Bat phan:          %o\n", val2);
    printf("   - Thap luc phan:     0x%X\n\n", val2);

    // c) 31000
    printf("c) So 31000:\n");
    printf("   - Nhi phan (16-bit): "); printBinary16(val3); printf("\n");
    printf("   - Bat phan:          %o\n", val3);
    printf("   - Thap luc phan:     0x%X\n\n", val3);

    // d) 32767
    printf("d) So 32767:\n");
    printf("   - Nhi phan (16-bit): "); printBinary16(val4); printf("\n");
    printf("   - Bat phan:          %o\n", val4);
    printf("   - Thap luc phan:     0x%X\n\n", val4);

    // e) -32768
    printf("e) So -32768:\n");
    printf("   - Nhi phan (16-bit): "); printBinary16(val5); printf("\n");
    printf("   - Bat phan:          %o\n", val5);
    printf("   - Thap luc phan:     0x%X\n\n", val5);


    // ==========================================
    // BÀI 2: 
    // ==========================================
    printf("=== BAI TAP 2 ===\n");

    char c1 = 'A';
    char c2 = 'a';
    char c3 = 'Z';
    char c4 = 'z';

    // a) 'A'
    printf("a) Ky tu 'A' (ASCII = %d):\n", c1);
    printf("   - Nhi phan (8-bit): "); printBinary8(c1); printf("\n");
    printf("   - Bat phan:         %o\n\n", c1);

    // b) 'a'
    printf("b) Ky tu 'a' (ASCII = %d):\n", c2);
    printf("   - Nhi phan (8-bit): "); printBinary8(c2); printf("\n");
    printf("   - Bat phan:         %o\n\n", c2);

    // c) 'Z'
    printf("c) Ky tu 'Z' (ASCII = %d):\n", c3);
    printf("   - Nhi phan (8-bit): "); printBinary8(c3); printf("\n");
    printf("   - Bat phan:         %o\n\n", c3);

    // d) 'z'
    printf("d) Ky tu 'z' (ASCII = %d):\n", c4);
    printf("   - Nhi phan (8-bit): "); printBinary8(c4); printf("\n");
    printf("   - Bat phan:         %o\n", c4);

    return 0;
}
