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

  if (n % 2 == 0)
  {
    n -= 1;
  }
  else
  {
    n -= 2;
  }

  for (int i = n; i > 0; i -= 2)
  {
    printf("%d ", a[i]);
  }

  return 0;
}
