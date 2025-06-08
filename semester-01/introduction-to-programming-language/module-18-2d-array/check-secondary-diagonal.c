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

        if (j != ((c - 1) - i) && a[i][j] != 0) // i + j == r - 1
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
    printf("Secondary Diagonal");
  }
  else
  {
    printf("Not Secondary Diagonal");
  }

  return 0;
}
