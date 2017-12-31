#include <stdio.h>

int main() {
  // declaration variables
  int i, j;
  int rows;

  i = 1;
  j = 1;

  // receive rows as user input
  printf("Enter star rows do you want: ");
  scanf("%d", &rows);

  // using while loop to print
  while (i <= rows) {
    while (j <= i) {
      printf("*");
      j++;
    }
    printf("\n");
    j = 1;
    i++;
  }
  
  return 0;
}
