#include <stdio.h>
enum semana
{
  Domingo,
  Segunda,
  Terca,
  Quarta,
  Quinta,
  Sexta,
  Sabado
};

int main()
{
  int week;

  printf("Digite um dia Da semana. Considere Domingo[0] \n");
  scanf("%d", &week);

  switch (week)
  {
  case Domingo:
    printf("%d - Domingo", week);
    break;
  case Segunda:
    printf("%d - Segunda-Feira", week);
    break;
  case Terca:
    printf("%d - Terca-Feira", week);
    break;
  case Quarta:
    printf("%d - Quarta-Feira", week);
    break;
  case Quinta:
    printf("%d - Quinta-Feira", week);
    break;
  case Sexta:
    printf("%d - Sexta-Feira", week);
    break;
  case Sabado:
    printf("%d - Sabado", week);
    break;
  }

  return 0;
}