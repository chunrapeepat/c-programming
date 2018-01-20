#include <stdio.h>
int absolute(int n);

int main()
{
  int largest = 0,
      n, flag;

  printf("***Largest Absolute Integer Software***\n");
  printf("EOF to quit: ^Z for DOS, ^D for Unix\n");

  flag = scanf("%d", &n);

  while (flag != EOF) {
    if (absolute(n) > largest) {
      largest = absolute(n);
    }
    flag = scanf("%d", &n);
    printf("DEBUG: Your flag is %d", flag);
  }

  printf("Maximum is %d", largest);
  return 0;
}

// Return absolute of input value
int absolute(int n)
{
  if (n < 0) {
    return -n;
  }
  return n;
}
