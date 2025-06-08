#include <stdio.h>

int main()
{
  int n, m;

  scanf("%d %d", &n, &m);

  int flag = 1;

  if (n == m)
  {
    int a[n][m];

    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < m; j++)
      {
        scanf("%d", &a[i][j]);

        if (i == j && a[i][j] != 1)
        {
          flag = 0;
        }
        else if (i + j == m - 1 && a[i][j] != 1)
        {
          flag = 0;
        }
        else if (i != j && i + j != m - 1 && a[i][j] != 0)
        {
          flag = 0;
        }
      }
    }
  }
  else
  {
    flag = 0;
  }

  if (flag)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}
