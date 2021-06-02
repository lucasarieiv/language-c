#include <stdio.h>

int fatorial(int N)
{
  if (N == 0)
    return 1;
  else
    return N * fatorial(N - 1);
}

int main()
{
  int valor;
  valor = fatorial(5);
  printf("Fatorial de 5 é: %d\n", valor);
  return 0;
}