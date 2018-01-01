#include <stdio.h>

#define READ_FLT(fvar) scanf("%f", &fvar)
#define PI 3.14159
#define SQ(x) ((x) * (x))

int main() 
{
  float radius;

  printf("Type circle radius: ");
  READ_FLT(radius);
  printf("The area of the circle is %6.2f", (PI * SQ(radius)));
  return 0;
}
