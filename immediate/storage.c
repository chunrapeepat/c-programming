#include <stdio.h>

void inc() {
  {
    static int x;
    x++;
  }
}

int main()
{
  {
    // auto is default storage class
    // variable can access within a block
    auto int x = 10;
  }

  {
    // register use for store variable in register
    // instead of ram. quick access variable
    // e.g counter, frequently used
    register int x;
    for (x = 0; x < 100; x++) {
      /* execute your code here */
    }
  }

  // static variable class store variable during life-time
  // when program is execute.
  inc(); //0
  inc(); //1
  inc(); //2
  inc(); //3
  inc(); //4

  // External storage class (global)
  // initialize to 0
  extern int x;

  return 0;
}
