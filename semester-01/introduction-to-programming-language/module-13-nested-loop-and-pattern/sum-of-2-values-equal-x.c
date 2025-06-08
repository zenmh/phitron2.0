#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  int x, flag = 0;

  scanf("%d", &x);

  for (int i = 0; i < n - 1; i++)
  {
    for (int j = i; j < n; j++)
    {
      if (a[i] + a[j] == x)
      {
        flag = 1;
        break;
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
