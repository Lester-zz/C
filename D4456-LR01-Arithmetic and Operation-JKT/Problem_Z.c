#include <stdio.h>

int main() {
    unsigned short z, a, b, c, d;
    scanf("%hu", &z);
    for (int i = 0; i < z; i++) {
        (void) scanf("%hu %hu %hu %hu", &a, &b, &c, &d);
        printf("%.2f\n", 2 * a + 2 * b + 4 * (double)c / 3 + (double)d / 2);
    }
    return 0;
}