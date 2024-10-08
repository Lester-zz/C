#include <stdio.h>

int main() {
    unsigned short a, b, c;
    scanf("%hu %hu %hu", &a, &b, &c);
    printf("%llu\n", (unsigned long long)a * b * c);
    return 0;
}