#include <stdio.h>

struct student
{
  char name[15];
  int rollno;
  int age;
};

int main()
{
  struct student chun = {"rapeepat", 1234, 18};
  printf("[%d] Hello! my name is %s age %d\n", chun.rollno, chun.name, chun.age);

  return 0;
}
