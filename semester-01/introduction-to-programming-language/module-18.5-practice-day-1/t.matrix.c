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

  int absolute_difference = primary_diagonal_sum - secondary_diagonal_sum;

  if (absolute_difference < 0)
  {
    absolute_difference *= -1;
  }

  printf("%d", absolute_difference);

  return 0;
}
