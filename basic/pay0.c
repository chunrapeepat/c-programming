#include <stdio.h>
/*
  File: pay0.c
  Programmer: Chun Rapeepat
  This program calculate the pay of one person,
  given the hours worked and rate of pay. */

int main() {
  // declarations
  int id_number;
  float hours_worked,
        rate_of_pay,
        pay;

  // print the title
  printf("***Pay Calculator***\n\n");

  // initialize variables
  id_number = 123;
  hours_worked = 20.0;
  rate_of_pay = 7.5;

  // calculate pay
  pay = hours_worked * rate_of_pay;

  // print data and result
  printf("%d\n", id_number);
  printf("Hours Worked = %f, Rate of Pay = %f\n", hours_worked, rate_of_pay);
  printf("Pay = %f\n", pay);

  return 0;
}
