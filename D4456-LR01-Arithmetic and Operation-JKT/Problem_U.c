#include <stdio.h>

int main() {
    unsigned short a, b;
    unsigned long long c;
    scanf("%hu", &a);
    for (int i = 0; i < a; i++) {
        scanf("%hu %llu", &b, &c);
        printf("%.2f\n", (double)(b * c) / 360.0);
    }
    return 0;
}