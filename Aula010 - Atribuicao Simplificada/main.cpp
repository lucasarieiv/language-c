#include <stdio.h>

int main()
{
  int x = 10, y = 10;
  int z = 2;

  y %= z;
  printf("y = %d\n", y);

  return 0;
}