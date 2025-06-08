#include <stdio.h>

int main()
{
  int n, k;

  scanf("%d %d", &n, &k);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n - 1; j++)
    {
      if (a[i] < a[j])
      {
        int tmp = a[i];

        a[i] = a[j];
        a[j] = tmp;
      }
    }
  }

  int cnt = 0, i = (n / 2) - 1, j = n / 2;

  while (i >= 0 && j < n)
  {
    if (a[i] + a[j] <= k)
    {
      cnt++;
    }

    i--;
    j++;
  }

  printf("%d", cnt);

  return 0;
}
