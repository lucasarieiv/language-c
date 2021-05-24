#include <stdio.h>

int main()
{
  int x, y, tabuada;

  printf("Digite o valor máximo da tabuada: \n");
  scanf("%d", &x);

  printf("Digite o valor da tabuada: \n");
  scanf("%d", &tabuada);
  y = 0;
  while (y < x)
  {
    y++;
    printf("%dx%d = %d \n", tabuada, y, tabuada * y);
  }
  return 0;
}