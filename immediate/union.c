#include <stdio.h>

int main()
{
  union data {
    int x[2];
    char c;
  };

  union data var;
  var.c = 7;
  printf("Bell charactor is running...%c\n", var.c);

  return 0;
}
