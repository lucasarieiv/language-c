#include <stdio.h>

int main()
{

  int mat[3] = {1,
                2,
                3};

  printf("%d", mat);

  // Row {1,2,3} and Column {1,2,3}
  int mat[2][3] = {{1, 2, 3}, {1, 2, 3}};

  return 0;
}