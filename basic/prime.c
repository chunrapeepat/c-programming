#include <stdio.h>

#define PRIME 2
#define FALSE 0 

int main() {
  // variable declaration
  int prime_limit,
      prime_counter,
      counter;

  prime_counter = 0;
  counter = 0;

  // store user input to variable
  printf("Enter limit prime number: ");
  scanf("%d", &prime_limit);

  while (prime_counter <= prime_limit) {
    int i = 1;
    int candidate = 0;
    while (i <= counter) {
      if (i % counter == FALSE) {
        candidate++;
      }
      i++;
    }
    if (candidate == PRIME) {
      printf("Prime number is %d", counter);
      prime_counter++;
    }
    // increment counter by one
    counter++;
  }
  return 0;
}
