#include <stdio.h>

long long sum = 0;

void summation(int a[], int n, int i)
{
  if (n == i)
  {
    return;
  }

  sum += a[i];

  summation(a, n, i + 1);
}

int main()
{
  int n;

  scanf("%d", &n);

  int a[n];

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);
  }

  summation(a, n, 0);

  printf("%lld", sum);

  return 0;
}
