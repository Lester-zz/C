#include <stdio.h>

int main() {
    unsigned short a,b;
    unsigned int c;

    scanf("%hu", &a);
    for(int i;i<a;i++){
        (void)scanf("%hu %u", &b, &c);
        printf("%.2f\n", (double)b / 100 * c);
    }
    return 0;
}