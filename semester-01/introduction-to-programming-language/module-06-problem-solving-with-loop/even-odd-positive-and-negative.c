#include <stdio.h>

int main()
{

  int n;

  scanf("%d", &n);

  int even = 0, odd = 0, positive = 0, negative = 0;

  while (n--)
  {
    int x;

    scanf("%d", &x);

    if (x % 2 == 0)
    {
      even++;
    }
    else
    {
      odd++;
    }

    if (x > 0)
    {
      positive++;
    }
    else if (x < 0)
    {
      negative++;
    }
  }

  printf("Even: %d\nOdd: %d\nPositive: %d\nNegative: %d", even, odd, positive, negative);

  return 0;
}
