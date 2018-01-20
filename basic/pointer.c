#include <stdio.h>

int main()
{
  int x = 10;
  int *p;
  int **q;

  p = &x;
  q = &p;

  printf("x value is %d\n", x);
  printf("address of x is %u\n", &x);
  printf("The value of p is %u\n", p);
  printf("The address of p is %u\n", &p);
  **q = 500;
  printf("The value pointed by the pointer p is %d\n", *p);
  printf("The value of q is %u\n", q);
  printf("The address of q is %u\n", &q);
  printf("Q = %d %d\n", **q, x);

  return 0;
}
