#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  int a[n][n], primary_diagonal_sum = 0, secondary_diagonal_sum = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      scanf("%d", &a[i][j]);

      if (i == j)
      {
        primary_diagonal_sum += a[i][j];
      }

      if (i + j == n - 1)
      {
        secondary_diagonal_sum += a[i][j];
      }
    }
  }

  int diff = primary_diagonal_sum - secondary_diagonal_sum, abs_diff;

  if (diff < 0)
  {
    abs_diff = diff * -1;
  }
  else
  {
    abs_diff = diff;
  }

  printf("%d", abs_diff);

  return 0;
}
