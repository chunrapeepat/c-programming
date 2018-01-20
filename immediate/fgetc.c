#include <stdio.h>

int main()
{
  FILE *fp;
  char ch;

  fp = fopen("anil.txt", "r");

  if (fp == NULL)
  {
    printf("Unable to read file\n");
  }
  else
  {
    while (!feof(fp)) {
      ch = fgetc(fp);
      printf("%c", ch);
    }
    fclose(fp);
  }

  return 0;
}
