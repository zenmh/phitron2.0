#include <stdio.h>

int main()
{
  int a[5][5], row_of_1, col_of_1;

  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      scanf("%d", &a[i][j]);

      if (a[i][j] == 1)
      {
        row_of_1 = i;
        col_of_1 = j;
      }
    }
  }

  int count = 0;

  while (row_of_1 != 2)
  {
    if (row_of_1 < 2)
    {
      a[row_of_1][col_of_1] = a[++row_of_1][col_of_1];
    }
    else
    {
      a[row_of_1][col_of_1] = a[--row_of_1][col_of_1];
    }

    count++;
  }

  while (col_of_1 != 2)
  {
    if (col_of_1 < 2)
    {
      a[row_of_1][col_of_1] = a[row_of_1][++col_of_1];
    }
    else
    {
      a[row_of_1][col_of_1] = a[row_of_1][--col_of_1];
    }

    count++;
  }

  printf("%d", count);

  return 0;
}
