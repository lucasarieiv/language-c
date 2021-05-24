#include <stdio.h>
#include <string.h>
struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;
};

int main()
{
  int i, tam;
  struct pessoa p[2];

  for (i = 0; i < 2; i++)
  {
    printf("Digite o seu Nome: \n");
    scanf("%s", p[i].nome);
  }

  printf("Os nomes Digitados Foram: \n");
  for (i = 0; i < 2; i++)
  {
    printf("%s\n", p[i].nome);
  }

  return 0;
}