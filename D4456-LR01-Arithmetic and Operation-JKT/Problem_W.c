#include <stdio.h>
int main(){
    int a,b,c;
    scanf("%d %d %d", &a, &b, &c);
    int d,e,f;
    d = (a / 10) % 10;
    e = (b / 10) % 10;
    f = (c / 10) % 10;
    printf("%d\n%d\n%d\n", d, e, f);
    return 0;
    
}