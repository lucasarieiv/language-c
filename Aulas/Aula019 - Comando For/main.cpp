#include <stdio.h>
int main()
{
  int a, b, c;

  printf("Digite um valores inteiros: \n");
  scanf("%d %d", &a, &b);

  for (c = a; c >= b; c--)
  {
    printf("%d \n", c);
    if (c == 1)
      printf("Ignition and liftoff");
  }
  return 0;
}