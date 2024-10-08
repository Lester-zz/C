#include <stdio.h>

int main() {
    unsigned short a, b;
    double c, d, e;
    scanf("%hu", &a);
    for (int i = 0; i < a; i++) {
        scanf("%hu", &b);
        c = (double)0.8 * b;
        d = (double)1.8 * b + 32;
        e = (double)b + 273.00;
        printf("%.2f %.2f %.2f\n", c, d, e);
    }
    return 0;
}