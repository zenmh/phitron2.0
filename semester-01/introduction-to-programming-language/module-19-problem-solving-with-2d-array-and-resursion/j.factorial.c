#include <stdio.h>

long long factorial = 1;

void fact(int n)
{

  if (n == 1)
  {
    return;
  }

  factorial *= n;

  fact(n - 1);
}

int main()
{
  int n;

  scanf("%d", &n);

  fact(n);

  printf("%lld", factorial);

  return 0;
}
