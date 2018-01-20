#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *p;
  p = (int *)malloc(sizeof(int));

  if (p == NULL)
  {
    printf("failed to allocate memory\n");
  }
  else
  {
    *p = 20;
    printf("%d\n", *p);
    free(p);
  }
  return 0;
}
