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
        else if (i == j && a[0][0] != a[i][j])
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
    printf("Primary Scalar Matrix");
  }
  else
  {
    printf("Not Primary Scalar Matrix");
  }

  return 0;
}
