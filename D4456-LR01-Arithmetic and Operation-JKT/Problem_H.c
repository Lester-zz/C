/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c,d;
    float a1,a2,a3;
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a1 =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a2 =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);
    scanf("%d %d %d %d", &a, &b, &c, &d);
    a3 =  (a / 1.0 + b / 2.0 + c / 3.0 + d / 4.0)+(b / 2.0 + c / 3.0 + d / 4.0 + c / 3.0)+( c / 3.0 + d / 4.0 + c / 3.0 + b / 2.0)+(d / 4.0 + c / 3.0 + b / 2.0 + a / 1.0);
    printf("%.2f\n", a1);
    printf("%.2f\n", a2);
    printf("%.2f\n", a3);
    
    
    return 0;
}