#include <stdio.h>

int fatorial(int n)
{
  int i, f = 1;
  for (i = 1; i <= n; i++)
    f = f * i;
  return f;
}

int main()
{
  int y = fatorial(4);
  printf("4! = %d \n", fatorial(10));
  printf("Fatorial de n = %d\n", y);
  return 0;
}
