#include <stdio.h>

int main()
{
  int a, b;

  printf("Digite um valor: ");
  scanf("%d", &a);
  printf("Digite um valor: ");
  scanf("%d", &b);

  while (a <= b)
  {
    if (a == 5)
      break;
    printf("\nValor de A = %d", a);
    a++;
  }

  return 0;
}