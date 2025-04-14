#include <stdio.h>

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    int n;

    scanf("%d", &n);

    if (n == 0 || n == 1)
    {
      printf("%d", 1);
    }
    else
    {
      long long factorial = 1;

      for (int i = n; i > 1; i--)
      {
        factorial *= i;
      }

      printf("%lld", factorial);
    }

    printf("\n");
  }

  return 0;
}
