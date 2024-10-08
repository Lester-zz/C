/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    float d;
    scanf("%d %d %d", &a, &b, &c);
    d = ((a*0.2)+(b*0.3)+(c*0.5));
    printf("%.2f\n", d);

    return 0;
}