#include <stdio.h>

long long factorial(int n)
{
  if (n == 1)
  {
    return 1;
  }

  long long fact = factorial(n - 1);

  return fact *= n;
}

int main()
{
  int n;

  scanf("%d", &n);

  printf("%lld", factorial(n));

  return 0;
}
