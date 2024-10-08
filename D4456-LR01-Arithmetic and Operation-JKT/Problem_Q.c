#include <stdio.h>
int main(){
    int a,b,c;
    char operator;
    scanf("%d %c %d", &a, &operator, &b);
    c = a + b;
    printf("%d\n", c);
    
    return 0;
    
}