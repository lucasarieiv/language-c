#include <stdio.h>
#include <stdlib.h>

int main()
{
  float f = 97.3;
  char ch1, ch2 = 'A';
  ch1 = f;
  printf("ch1 = %c \n", ch1);

  f = ch2;

  printf("ch2 = %f \n", f);

  return 0;
}
