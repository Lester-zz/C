/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d %d", &a, &b);
    int x = 0;
    int i = a;
    while(x <= b ){
    printf("%d\n", i);
    i++;
    x++;
    }
    return 0;
}