#include <stdio.h>

int main()
{
  int x, y, z;
  printf("Digite x:");
  scanf("%d", &x);
  printf("Digite y:");
  scanf("%d", &y);

  x > y ? printf("X é maior") : printf("Y é maior");

  return 0;
}