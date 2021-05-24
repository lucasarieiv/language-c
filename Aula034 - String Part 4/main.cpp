#include <stdio.h>
#include <string.h>

int main()
{
  char palavra[20] = "Linguaagem C";
  char vogais[11] = "aeiouAEIOU";
  int i, j, total = 0;
  int tam1 = strlen(palavra);
  int tam2 = strlen(vogais);

  for (i = 0; i < tam1; i++)
  {
    for (j = 0; j < tam2; j++)
    {
      if (palavra[i] == vogais[j])
      {
        total++;
        break;
      }
    }
  }

  printf("O total de Vogais na String são: %d", total);
  return 0;
}