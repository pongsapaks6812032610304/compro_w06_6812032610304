#include <stdio.h>

int main() {
    // 1. x = x - 4.0;
    double x1 = 10.0;
    double x2 = 10.0;
    x1 = x1 - 4.0;    // แบบเต็ม
    x2 -= 4.0;        // แบบย่อ
    printf("1. x1 = %.2f, x2 = %.2f\n", x1, x2);

    // 2. x = 6.5 * x;
    x1 = 2.0;
    x2 = 2.0;
    x1 = 6.5 * x1;    // แบบเต็ม
    x2 *= 6.5;        // แบบย่อ
    printf("2. x1 = %.2f, x2 = %.2f\n", x1, x2);

    // 3. x = x % (y + z * a);
    int x3 = 20, x4 = 20;
    int y = 2, z = 3, a = 4;
    x3 = x3 % (y + z * a);   // แบบเต็ม
    x4 %= (y + z * a);       // แบบย่อ
    printf("3. x3 = %d, x4 = %d\n", x3, x4);

    // 4. x = x / (2.0 * x);
    x1 = 4.0;
    x2 = 4.0;
    x1 = x1 / (2.0 * x1);    // แบบเต็ม
    x2 /= (2.0 * x2);        // แบบย่อ
    printf("4. x1 = %.2f, x2 = %.2f\n", x1, x2);

    // 5. total = total + (price * quantity - discount);
    double price = 10.0, quantity = 2.0, discount = 3.0;
    double total1 = 0, total2 = 0;
    total1 = total1 + (price * quantity - discount); // แบบเต็ม
    total2 += (price * quantity - discount);         // แบบย่อ
    printf("5. total1 = %.2f, total2 = %.2f\n", total1, total2);

    // 6. x = x * (1 + rate / 100);
    double rate = 5.0;
    x1 = 100.0;
    x2 = 100.0;
    x1 = x1 * (1 + rate / 100); // แบบเต็ม
    x2 *= (1 + rate / 100);     // แบบย่อ
    printf("6. x1 = %.2f, x2 = %.2f\n", x1, x2);

    // 7. score = score - (penalty * (mistake + 1));
    int score1 = 100, score2 = 100;
    int penalty = 2, mistake = 3;
    score1 = score1 - (penalty * (mistake + 1)); // แบบเต็ม
    score2 -= (penalty * (mistake + 1));         // แบบย่อ
    printf("7. score1 = %d, score2 = %d\n", score1, score2);

    return 0;
}