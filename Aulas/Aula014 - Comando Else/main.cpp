#include <stdio.h>

int main()
{
  int x;
  printf("Digite um número: ");
  scanf("%d", &x);

  if (x % 2 == 0)
    printf("O Valor é PAR \n");
  else
    printf("O Valor é ÍMPAR \n");

  return 0;
};