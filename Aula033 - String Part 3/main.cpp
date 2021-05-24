#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[20] = "Linguagem C";
  char c;
  int i, tam = strlen(palavra);
  // [ 'L', 'i', 'n', 'g', 'u', 'a', 'g', 'e', 'm', '', 'C' ]

  // [ 'C', ' ', 'n', 'g', 'u', 'a', 'g', 'e', 'm', 'i', 'L' ]

  // [ 'C', ' ', 'm', 'e', 'u', 'a', 'g', 'g', 'n', 'i', 'L' ]

  // [ 'C', ' ', 'm', 'e', 'g', 'a', 'u', 'g', 'n', 'i', 'L' ]

  // i = 5
  for (i = 0; i < tam / 2; i++)

  {
    c = palavra[i];                    /* u */
    palavra[i] = palavra[tam - 1 - i]; /* palavra[4] = 'g' */
    palavra[tam - 1 - i] = c;          /* palavra[6] = u */
  }

  printf("palavra = %s \n", palavra);
  return 0;
}