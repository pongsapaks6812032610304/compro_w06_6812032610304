#include <stdio.h>

int main() {
    float x = 10.0, y = 2.0, z = 3.0, a = 1.0;
    float price = 100.0, quantity = 2.0, discount = 10.0;
    float rate = 5.0;
    float total = 0.0;
    int mistake = 2;
    int penalty = 3;
    int score = 100;

    // แสดงค่าก่อน
    printf("ค่าเริ่มต้น:\n");
    printf("x = %.2f\n", x);
    printf("total = %.2f\n", total);
    printf("score = %d\n", score);

    // Short-hand Expressions
    x -= 4.0;
    printf("\nหลังจาก x -= 4.0: x = %.2f\n", x);

    x *= 6.5;
    printf("หลังจาก x *= 6.5: x = %.2f\n", x);

    x = (int)x % (int)(y + z * a); // ใช้ % ต้องเป็น int
    printf("หลังจาก x %%= (y + z * a): x = %.2f\n", x);

    x /= (2.0 * x);
    printf("หลังจาก x /= (2.0 * x): x = %.2f\n", x);

    total += (price * quantity - discount);
    printf("หลังจาก total += (price * quantity - discount): total = %.2f\n", total);

    x *= (1 + rate / 100);
    printf("หลังจาก x *= (1 + rate / 100): x = %.2f\n", x);

    score -= (penalty * (mistake + 1));
    printf("หลังจาก score -= (penalty * (mistake + 1)): score = %d\n", score);

    return 0;
}
