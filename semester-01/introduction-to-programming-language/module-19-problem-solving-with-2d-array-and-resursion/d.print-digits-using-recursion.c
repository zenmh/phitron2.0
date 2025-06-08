#include <stdio.h>

void prnt(int n)
{
  if (n == 0)
  {
    return;
  }

  prnt(n / 10);

  printf("%d ", n % 10);
}

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    int n;

    scanf("%d", &n);

    if (n == 0)
    {
      printf("%d", 0);
    }
    else
    {
      prnt(n);
    }

    printf("\n");
  }

  return 0;
}
