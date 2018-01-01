#include <stdio.h>

int main()
{
  int x;
  int incr(int n);
  
  x = 7;
  printf("The value of %d + 1 is %d", x, incr(x));

  return 0;
}

int incr(int n) 
{
  n = n + 1;
  return n;
}
