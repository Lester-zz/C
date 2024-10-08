#include <stdio.h>

int main()
{
    
  int a,b,c;
  float d,e,f;
  scanf("%d %d %d", &a, &b, &c);
  d = 0.20 * a;
  e = 0.30 * b;
  f = 0.50 * c;
  printf("%.2f\n", d+e+f);
    return 0;
}