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

  int i = 0, j = n - 1;

  while (i < j)
  {
    printf("%d %d ", a[i], a[j]);

    i++;
    j--;
  }

  if (n % 2 == 1)
  {
    printf("%d", a[n / 2]);
  }

  return 0;
}
