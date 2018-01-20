#include <stdio.h>
#include <stdlib.h>

int main()
{
  FILE *fp;
  char ch;

  fp = fopen(__FILE__, "r");
  if (fp == NULL)
  {
    puts("Unable to open file");
  }
  else
  {
    do {
      ch = fgetc(fp);
      putchar(ch);
    } while(ch != EOF);
  }

  fclose(fp);

  return 0;
}
