#include <stdio.h>

int main()
{
  FILE *Fpointer;

  Fpointer = fopen("anil.txt", "w");

  if (Fpointer == NULL)
  {
    printf("Unable to create the file\n");
  }
  else
  {
    printf("file opened succesfully\n");
    fclose(Fpointer);
  }
  return 0;
}
