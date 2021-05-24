#include <stdio.h>
int main()
{
  char sumsub;
  int x, y, sum, sub;

  printf("Qual operação deseja fazer ? [+] ou [-] ? ");
  scanf("%c", &sumsub);

  printf("\n Digite o valor de X:");
  scanf("%d", &x);

  printf("\n Digite o valor de Y: ");
  scanf("%d", &y);

  switch (sumsub)
  {
  case '+':

    sum = x + y;
    printf("A soma de (X + Y) = %d", sum);

    break;
  case '-':
    sub = x - y;
    printf("A Subtração de (X - Y) = %d", sub);
    break;
  default:
    printf("[ERROR] - Digite um Operador Aritmético Válido");
  }

  return 0;
}