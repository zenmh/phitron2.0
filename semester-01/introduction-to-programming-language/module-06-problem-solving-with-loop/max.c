#include <stdio.h>

int main()
{
  int n, x, max = 0;

  scanf("%d", &n);

  while (n--)
  {
    scanf("%d", &x);

    if (x > max)
    {
      max = x;
    }
  }

  printf("%d", max);

  return 0;
}
