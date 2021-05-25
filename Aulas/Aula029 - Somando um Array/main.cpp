#include <stdio.h>

int main()
{
  int i, mat[5] = {5, 20, 15, 10, 7};
  int soma = 0;
  for (i = 0; i < 5; i++)
  {
    soma += mat[i];
  }

  printf("A soma do Array Mat é: %d", soma);
  return 0;
}