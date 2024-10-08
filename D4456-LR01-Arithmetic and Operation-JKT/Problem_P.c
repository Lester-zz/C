#include <stdio.h>

int main() {
    unsigned int a, b;
    for (int i = 0; i < 4; i++) {
        scanf("%u %u", &a, &b);
        printf("$%.2f\n", b / (1.0 - (double)a / 100.0));
    }
    return 0;
}