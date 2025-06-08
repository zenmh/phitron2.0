#include <stdio.h>
#include <stdbool.h>

int main()
{
  int r, c;

  scanf("%d %d", &r, &c);

  bool flag = true;

  if (r == c)
  {
    int a[r][c];

    for (int i = 0; i < r; i++)
    {
      for (int j = 0; j < c; j++)
      {
        scanf("%d", &a[i][j]);

        if (i != j && a[i][j] != 0)
        {
          flag = false;
          break;
        }
        else if (i == j && a[i][j] != 1)
        {
          flag = false;
          break;
        }
      }
    }
  }
  else
  {
    flag = false;
  }

  if (flag)
  {
    printf("Unit Matrix");
  }
  else
  {
    printf("Not Unit Matrix");
  }

  return 0;
}
