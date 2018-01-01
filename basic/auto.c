#include <stdio.h>

int main()
{
  auto int x = 10, z = 15;
  printf("Automatic Variables and Scope\n\n");     
  {
    int x = 20, y = 30;
    printf("Inner x = %d, y = %d", x, y);
  }
  printf("Outer x = %d, y = %d", x, z);
  return 0;
}
