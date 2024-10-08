/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a = 0;
    int b;
    int total = 0, damage = 100, bonus = 0;
    long long x = 0;
    scanf("%d", &b);
    while (a < b){
        total = damage + bonus;
        x = x + total;
        bonus = bonus + 50;
        a++;
    }
    printf("%lld\n", x);
    return 0;
}