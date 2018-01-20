#include <stdio.h>

int main()
{
  typedef struct {
    int age;
    char *name;
  } *Person;

  Person chun;
  chun->name = "Chun Rapeepat";
  chun->age = 18;

  printf("Hello my name is %s age %d\n", chun->name, chun->age);

  return 0;
}
