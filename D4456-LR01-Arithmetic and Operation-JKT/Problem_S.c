#include <stdio.h>

int main() {
    double a, b, c;
    scanf("%lf %lf %lf", &a, &b, &c);
    printf("%.3f\n", 3 * (b * a) + (b * c));
    return 0;
}