#include <stdio.h>

int main()
{
  int r, x = 3, y = 2;
  r = !((x > y) && (y < 4));
  printf("Resultado = %d", r);

  return 0;
}