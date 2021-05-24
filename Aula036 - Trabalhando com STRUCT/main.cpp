#include <stdio.h>
#include <string.h>

struct pessoa
{
  char nome[50], rua[50];
  int idade, numero;
};

int main()
{
  struct pessoa p = {"Ricardo", "Rua 1", 31, 101};
  struct pessoa p2;

  strcpy(p2.nome, p.nome);
  strcpy(p2.rua, p.rua);

  p2.idade = p.idade;
  p2.numero = p.numero;
  printf("%d %d", p2.idade, p2.numero);

  return 0;
}