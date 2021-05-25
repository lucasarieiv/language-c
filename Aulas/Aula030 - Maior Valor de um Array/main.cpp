#include <stdio.h>
int main()
{
  int i, mat[5] = {15, 30, 750, -1, 5};
  int Maior = mat[0], Menor = mat[0];

  for (i = 1; i < 5; i++)
  {
    if (mat[i] > Maior)
      Maior = mat[i];

    if (mat[i] < Menor)
      Menor = mat[i];
  }

  printf("\nO Maior valor do Array Mat é: %d \nO Menor valor do Array Mat é: %d", Maior, Menor);
  return 0;
}