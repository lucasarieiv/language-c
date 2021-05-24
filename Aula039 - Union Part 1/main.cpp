#include <stdio.h>
#include <string.h>

union tipo
{
  short int x;
  unsigned char c;
};

int main()
{
  union tipo u;

  u.x = 5;
  u.c = 'a';

  printf("%c", u.x);

  return 0;
}