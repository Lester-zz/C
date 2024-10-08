/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char i[100];
    char b[9];
    int c;
    scanf("%[^\n] %s %d", i, b, &c);
    printf("Name: %s\nNIS: %s\nAge: %d\n", i, b, c);

    return 0;
}