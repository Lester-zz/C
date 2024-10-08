/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a;
    int b,c,d;
    scanf("%d", &a);
    int array[a];
    for (int t = 1; t <= a; t++){
        scanf("%d %d %d", &b, &c, &d);
        if( c + d >= b){
            array[t-1] = 1;
        }else{
            array [t-1] = 2;
        }
    }
    for (int o = 0; o < a; o++){
        if(array[o] == 1)
        printf("Case #%d: yes\n", o+1);
        else{
            printf("Case #%d: no\n", o+1);
        }
    }
    return 0;
}