#include <stdio.h>

int Soma(int n)
{
  if (n == 0)
  {
    return 0;
  }
  else
  {
    return n + Soma(n - 1);
  }
}

int main()
{
  int x;
  x = Soma(5);
  printf("Resultado: %d\n", x);
  return 0;
}