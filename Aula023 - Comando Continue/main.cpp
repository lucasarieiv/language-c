#include <stdio.h>
int main()
{
  int a, b;
  printf("Digite um valor para (a): ");
  scanf("%d", &a);
  printf("Digite um valor para (b): ");
  scanf("%d", &b);
  while (a <= b)
  {
    a++;
    if (a == 5)
      continue;
    printf("%d\n", a);
  }
  return 0;
}