#include <stdio.h>

int main()
{
  int r, c;

  scanf("%d %d", &r, &c);

  int a[r][c], flag = 1;

  for (int i = 0; i < r; i++)
  {
    for (int j = 0; j < c; j++)
    {
      scanf("%d", &a[i][j]);

      if (a[i][j] != 0)
      {
        flag = 0;
      }
    }
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
