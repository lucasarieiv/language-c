#include <stdio.h>
#include <string.h>

#define LENGTH 2

struct materias
{
  char nome[20];
  int nota;
};

struct alunos
{
  char nome[20];
  struct materias materia = {"Matematica", 0};
};

int main()
{
  struct alunos aluno[LENGTH];

  int i;

  for (i = 0; i < LENGTH; i++)
  {
    printf("Digite seu Nome: \n");
    scanf("%s", aluno[i].nome);
    do
    {
      printf("Digite a nota da Matéria %s: ", aluno[i].materia.nome);
      scanf("%d", &aluno[i].materia.nota);
    } while (aluno[i].materia.nota > 10 || aluno[i].materia.nota < 0);
  }

  for (i = 0; i < LENGTH; i++)
  {
    printf("Resultado %s [%s - Nota: %d] \n", aluno[i].nome, aluno[i].materia.nome, aluno[i].materia.nota);
  }

  return 0;
}