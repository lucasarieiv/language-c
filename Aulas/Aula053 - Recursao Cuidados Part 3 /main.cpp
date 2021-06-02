#include <stdio.h>
// Devemos tomar cuidados para não esquecer do critério de parada
// pois se não tiver acontecerar um empilhamento de funcoes gerando estouro de pico de memória
// e travando o programa

int fatorial(int N)
{
  if (N == 0)
    return 1; // Critério de parada
  else
    return N * fatorial(N - 1); // Parâmetro da chamada recursiva
}

int main()
{
  int valor;
  valor = fatorial(5);
  printf("Fatorial de 5 é: %d\n", valor);
  return 0;
}