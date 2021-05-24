#include <stdio.h>

int main()
{
  int num;
  printf("Digite um número: ");
  scanf("%d", &num);

  if (num >= 0)
  {
    if (num == 0)
    {
      printf("Num é igual a 0\n");
    }
  }
  else
  {
    printf("O número é menor do que 0\n");
  }

  return 0;
}