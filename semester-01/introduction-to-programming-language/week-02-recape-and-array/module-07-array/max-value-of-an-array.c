#include <stdio.h>
#include <limits.h>

int main()
{
  int n;

  scanf("%d", &n);

  int a[n], max = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);

    if (a[i] > max)
    {
      max = a[i];
    }
  }

  printf("%d", max);

  return 0;
}
