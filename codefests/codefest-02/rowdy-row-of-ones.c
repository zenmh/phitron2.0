#include <stdio.h>

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  int a[n][m], row = 0, count = 0;

  for (int i = 0; i < n; i++)
  {
    int cnt = 0;
    for (int j = 0; j < m; j++)
    {
      scanf("%d", &a[i][j]);

      if (a[i][j] == 1)
      {
        cnt++;
      }
    }

    if (cnt > count)
    {
      count = cnt;
      row = i;
    }
  }

  printf("%d", row);

  return 0;
}
