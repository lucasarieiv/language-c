#include <stdio.h>

int soma(int a, int b);

int main()
{
  int valor;
  valor = soma(7, 5);
  printf("%d", valor);
  return 0;
}

int soma(int a, int b)
{
  int soma;
  soma = a + b;
  return soma;
}