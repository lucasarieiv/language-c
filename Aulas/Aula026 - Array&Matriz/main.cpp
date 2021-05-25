#include <stdio.h>
#define column 10
#define row 5
int main()
{
  int mat[row][column], c, r;

  for (c = 0; c < row; c++)
  {
    printf("\n");
    for (r = 0; r < column; r++)
    {
      printf("[ ]");
    }
  }

  return 0;
}