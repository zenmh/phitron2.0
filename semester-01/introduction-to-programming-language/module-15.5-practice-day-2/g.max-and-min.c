#include <stdio.h>
#include <limits.h>

void max_and_min()
{
  int n;

  scanf("%d", &n);

  int a[n];

  int mn = INT_MAX, mx = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);

    if (a[i] < mn)
    {
      mn = a[i];
    }

    if (a[i] > mx)
    {
      mx = a[i];
    }
  }

  printf("%d %d", mn, mx);
}

int main()
{
  max_and_min();

  return 0;
}
