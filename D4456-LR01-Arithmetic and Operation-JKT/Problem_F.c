/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d,e,f;
    char operator;
    scanf("%d %c %d %c", &a, &operator, &b, &operator);
    scanf("%d %c %d %c", &c, &operator, &d, &operator);
    scanf("%d %c %d %c", &e, &operator, &f, &operator);
    int g,h,i;
    g = a + b;
    h = c + d;
    i = e + f;
    printf("%d\n%d\n%d\n", g, h, i);

    return 0;
}