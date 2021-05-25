#include <stdio.h>

#define N 5

int main()
{
  float notas[N], media = 0.0;
  int i;

  for (i = 0; i < N; i++)
  {
    printf("\nDigite a Nota do Aluno(%d): ", i + 1);
    scanf("%f", &notas[i]);
    media = media + notas[i];
  }

  media = media / N;
  printf("A média da turma foi: %f", media);

  for (i = 0; i < N; i++)
  {
    if (notas[i] > media)
    {
      printf("\nO Aluno(%i): %f\n", i + 1, notas[i]);
    }
  }
  return 0;
}