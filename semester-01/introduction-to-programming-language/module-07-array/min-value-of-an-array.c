#include <stdio.h>
#include <limits.h>

int main()
{
  int n;

  scanf("%d", &n);

  int a[n], min = INT_MAX;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);

    if (a[i] < min)
    {
      min = a[i];
    }
  }

  printf("%d", min);

  return 0;
}
