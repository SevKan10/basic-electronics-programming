#include <stdio.h>

float subMon = 1000; // đồng/tháng
int useDefault = 450, useOverDefault1 = 700, useOverDefault2 = 910, useOverDefault3 = 1200; // đồng/Kwh
float numOld, numNew, totalSumMoney, totalMoney1, totalMoney2, totalMoney3;

int main() {

    printf("Nhap so dien cu cua ban: "); scanf("%f", &numOld);
    printf("Nhap so dien moi cua ban: "); scanf("%f", &numNew);

    if (numNew < numOld) {
        printf("So dien moi khong hop le");
        return main();
    }
    totalSumMoney = subMon;
    if (numNew - numOld <= 50) {
        totalMoney1 = (numNew - numOld) * useDefault;
        totalSumMoney += (numNew - numOld) * useDefault;
    } else if (numNew - numOld > 50 && numNew - numOld < 100) {
        totalMoney1 = 50 * useOverDefault1;
        totalMoney2 = (numNew - numOld - 50) * useOverDefault2;
        totalSumMoney += totalMoney1 + totalMoney2;
    } else if (numNew - numOld >= 100) {
        totalMoney1 = 50 * useOverDefault1;
        totalMoney2 = 50 * useOverDefault2; 
        totalMoney3 = (numNew - numOld - 100) * useOverDefault3;
        totalSumMoney += totalMoney1 + totalMoney2 + totalMoney3;
    } else {
        printf("So dien khong hop le");
        return main();
    }
    printf("So tien dien muc 1: %.2f dong\n", totalMoney1);
    printf("So tien dien muc 2: %.2f dong\n", totalMoney2);
    printf("So tien dien muc 3: %.2f dong\n", totalMoney3);
    printf("\t>Tong so tien dien cua ban la: %.2f dong\n", totalSumMoney);
    return 0;
}