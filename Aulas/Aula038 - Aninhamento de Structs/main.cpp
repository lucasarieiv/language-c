#include <stdio.h>
#include <string.h>

struct endereco
{
  char rua[50];
  int numero;
};

struct pessoa
{
  char nome[50];
  int idade;
  struct endereco ender;
};

int main()
{
  struct pessoa p1;

  strcpy(p1.nome, "Lucas Vieira");
  p1.idade = 31;
  p1.ender.numero = 101;
  printf("O numero é %d e a idade é %d e o nome é %s ", p1.ender.numero, p1.idade, p1.nome);

  return 0;
}