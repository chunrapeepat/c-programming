#include <stdio.h>
#define PASS_SCORE 50

int main() {
  float score;
  
  printf("Enter your score: ");
  scanf("%f", &score);

  if (score > PASS_SCORE) {
    printf("You pass the exam!.\n");
  } else {
    printf("You fail the exam T-T.\n");
  }

  return 0;
}
