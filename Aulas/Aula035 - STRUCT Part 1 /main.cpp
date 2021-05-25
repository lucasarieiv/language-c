#include <stdio.h>

struct aluno
{
  char nome[50];
  float nota;
};

int main()
{
  struct aluno aluno1, aluno2;

  float media;

  printf("Digite o nome do Aluno: ");
  scanf("%s", aluno1.nome);
  printf("Digite a Nota do aluno %s: ", aluno1.nome);
  scanf("%f", &aluno1.nota);

  printf("Digite o nome do Aluno: ");
  scanf("%s", aluno2.nome);
  printf("Digite a Nota do aluno %s: ", aluno2.nome);
  scanf("%f", &aluno2.nota);

  media = (aluno1.nota + aluno2.nota) / 2;

  printf("A média dos Alunos %s e %s foram de %f", aluno1.nome, aluno2.nome, media);
  return 0;
}