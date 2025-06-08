#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    if (i <= n)
    {
      for (int j = n - i; j > 0; j--)
      {
        printf(" ");
      }

      for (int j = 1; j < i * 2; j++)
      {
        if (i % 2 == 0)
        {
          printf("-");
        }
        else
        {
          printf("#");
        }
      }
    }

    printf("\n");
  }

  int space = 1;

  for (int i = n - 1; i > 0; i--)
  {
    for (int j = 1; j <= space; j++)
    {
      printf(" ");
    }

    for (int j = 1; j < (i * 2); j++)
    {
      if (i % 2 == 0)
      {
        printf("-");
      }
      else
      {
        printf("#");
      }
    }

    space++;
    printf("\n");
  }

  return 0;
}
