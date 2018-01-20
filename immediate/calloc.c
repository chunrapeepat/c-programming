#include <stdio.h>
#include <stdlib.h>

int main()
{
  int *marks, length, counter;
  puts("Enter the number of subjects");
  scanf("%d", &length);

  marks = (int *)calloc(length, sizeof(int));
  if (marks == NULL)
  {
    puts("Unable to allocate memory");
  }
  else
  {
    for (counter = 0; counter < length; counter++) {
      printf("Enter the mark of %d subject: ", counter + 1);
      scanf("%d", &marks[counter]);
    }
    for (counter = 0; counter < length; counter++) {
      printf("%d\n", marks[counter]);
    }
  }

  free(marks);
  return 0;
}
