/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[100];
    char b[100];
    double c;
    double d;
    int e;
    int f;
    scanf("%s %lf %d %s %lf %d", a, &c, &e, b, &d, &f);
    printf("Name 1: %s\nHeight 1: %.2f\nAge 1: %d\nName 2: %s\nHeight 2: %.2f\nAge 2: %d\n", a, c, e, b, d, f);

    return 0;
}