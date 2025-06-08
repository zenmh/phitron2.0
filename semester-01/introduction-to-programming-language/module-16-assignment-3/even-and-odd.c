#include <stdio.h>

void odd_even()
{
  int n;

  scanf("%d", &n);

  int a[n], odd = 0, even = 0;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);

    if (a[i] % 2 == 0)
    {
      even++;
    }
    else if (a[i] % 2 != 0)
    {
      odd++;
    }
  }

  printf("%d %d", even, odd);
}

int main()
{
  odd_even();

  return 0;
}
