#include <stdio.h>

int main()
{
  char nome[20] = "Lucas";
  nome[4] = '\0';
  printf("%s", nome);
  return 0;
}