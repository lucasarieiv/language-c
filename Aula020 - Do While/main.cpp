#include <stdio.h>
int main()
{
  int value;

  do
  {
    printf("Escolha uma opção \n");
    printf("(1) O Poderoso Chefão\n");
    printf("(2) Interestellar\n");
    printf("(3) Perdidos em Marte\n");
    scanf("%d", &value);
  } while (value < 1 || value > 3);

  printf("Que legal. Você escolheu uma opção Válida");

  return 0;
}