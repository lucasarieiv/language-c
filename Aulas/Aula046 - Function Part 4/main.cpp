#include <stdio.h>

void imprime(int n)
{
  int i;
  for (i = 1; i <= n; i++)
  {
    printf("Linha %d \n", i);
  }
}

int main()
{
  imprime(7);
  return 0;
}
