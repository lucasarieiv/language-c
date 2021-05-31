#include <stdio.h>

// Passagem por valor;

void imprime_valor(int n)
{
  n = n + 1;
  printf("O valor de n = %d \n", n);
}

int main()
{
  int x = 5;
  printf("O valor de X = %d \n", x);
  imprime_valor(x);
  printf("O valor de X = %d\n", x);
  return 0;
}
