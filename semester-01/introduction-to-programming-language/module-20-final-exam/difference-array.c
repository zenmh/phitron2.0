#include <stdio.h>

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    int n;

    scanf("%d", &n);

    int a[n], b[n], c[n];

    for (int i = 0; i < n; i++)
    {
      scanf("%d", &a[i]);
      b[i] = a[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
      for (int j = i; j < n; j++)
      {
        if (b[i] > b[j])
        {
          int tmp = b[i];

          b[i] = b[j];
          b[j] = tmp;
        }
      }
    }

    for (int i = 0; i < n; i++)
    {
      int diff = a[i] - b[i];

      if (diff < 0)
      {
        diff *= -1;
      }

      c[i] = diff;

      printf("%d ", c[i]);
    }

    printf("\n");
  }

  return 0;
}
