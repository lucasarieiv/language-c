#include <stdio.h>

// Passagem por referencia;
// o n passa a acessar o endereco da memoria de x. e modificando o mesmo
void muda_valor(int *n)
{
  *n = *n + 1;
}

int main()
{
  int x = 5, y;
  y = 10;

  muda_valor(&y);
  printf("Valor de y agora é: %d", y);

  return 0;
}
