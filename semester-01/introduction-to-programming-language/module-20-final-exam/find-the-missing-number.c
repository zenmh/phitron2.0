#include <stdio.h>

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    long long m;
    int a, b, c;

    scanf("%lld %d %d %d", &m, &a, &b, &c);

    long long mul = a * b * c;

    if (m % mul == 0)
    {
      printf("%lld", m / mul);
    }
    else
    {
      printf("-1");
    }

    printf("\n");
  }

  return 0;
}
