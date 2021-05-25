#include <stdio.h>
typedef int inteiro;
typedef struct cadastro cad;

struct cadastro
{
  char nome[20];
  inteiro idade;
};

int main()
{
  cad c2;
  printf("Digite Seu nome: \n");
  scanf("%s", c2.nome);
  printf("Digite Sua idade: \n");
  scanf("%d", &c2.idade);

  printf("Olá, %s voce tem %d anos de idade.", c2.nome, c2.idade);
  return 0;
}