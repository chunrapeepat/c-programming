#include <stdio.h>

int main()
{
  FILE *fp;
  char data[25];

  fp = fopen("anil.txt", "w");

  if (fp == NULL)
  {
    printf("Unable to write file\n");
  }
  else
  {
    printf("Enter text to write to file: ");
    gets(data);
    fputs(data, fp);
    fclose(fp);
    printf("Write file succesfully\n");
  }
  return 0;
}
