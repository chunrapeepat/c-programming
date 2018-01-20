#include <stdio.h>
#include <string.h>

int main()
{
  FILE *Fpointer;
  char *data = "Learning c programming";
  int length = strlen(data);
  int counter;

  Fpointer = fopen("anil.txt", "w");

  if (Fpointer == NULL)
  {
    printf("Unable to create the file\n");
  }
  else
  {
    for (counter = 0; counter < length; counter++) {
      fputc(data[counter], Fpointer);
    }
    printf("file opened succesfully\n");
    fclose(Fpointer);
  }
  return 0;
}
