#include <stdio.h>

void imprime_vetor(int *vetor, int m)
{
  int i;

  for (i = 0; i < m; i++)
  {
    vetor[i] = vetor[i] + 1;
    printf("%d \n", vetor[i]);
  }
}

int main()
{
  int mat[5] = {1, 2, 3, 4, 5};
  imprime_vetor(mat, 5);
  printf("%d", mat[0]);
  return 0;
}
