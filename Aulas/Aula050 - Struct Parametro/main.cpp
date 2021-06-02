#include <stdio.h>

struct ponto
{
  int x, y;
};

void atribuicao(struct ponto *p)
{
  p->x = p->x + 1;
  p->y = p->y + 1;
}

int main()
{

  struct ponto p1 = {10, 20};

  atribuicao(&p1);

  printf("Valor de p1.x = %d\n", p1.x);
  printf("Valor de p1.y = %d\n", p1.y);

  return 0;
}
