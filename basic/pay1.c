#include <stdio.h>

int main() {
  // declarations
  float hours_worked,
        rate_of_pay,
        pay;

  // read data into variable
  printf("Hours Worked: ");
  scanf("%f", &hours_worked);
  printf("Hourly Rate: ");
  scanf("%f", &rate_of_pay);

  // calculate the result
  pay = hours_worked * rate_of_pay;

  // print the result
  printf("%f the result", pay); 

  return 0;
}
