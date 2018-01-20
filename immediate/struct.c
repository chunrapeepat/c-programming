#include <stdio.h>

struct student {
  char *name;
  int age;
};

void mutateStudent(struct student *);

int main()
{
  struct student chun = {"eieiza", 50};

  printf("%s\n", chun.name);
  mutateStudent(&chun);
  printf("%s\n", chun.name);
  return 0;
}

void mutateStudent(struct student *person) {
  person->name = "chunza2542";
}
