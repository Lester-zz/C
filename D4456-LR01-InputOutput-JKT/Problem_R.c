/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char a[30];
    char b[100];
    char c[30];
    int d;
    scanf("%s %[^\n] %c %d", a, b, c, &d);
    printf("Id    : %s\nName  : %s\nClass : %s\nNum   : %d\n", a, b, c, d);

    return 0;
}