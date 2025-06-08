#include <stdio.h>

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  int a[n][m];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0, k = m - 1; j < k; j++, k--)
    {
      int tmp = a[i][j];
      a[i][j] = a[i][k];
      a[i][k] = tmp;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      printf("%d ", a[i][j]);
    }

    printf("\n");
  }

  return 0;
}
