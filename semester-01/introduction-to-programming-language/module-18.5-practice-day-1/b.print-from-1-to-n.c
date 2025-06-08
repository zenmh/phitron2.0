#include <stdio.h>

void prnt(int i, int n)
{
  if (i > n)
  {
    return;
  }

  printf("%d\n", i);

  prnt(i + 1, n);
}

int main()
{
  int n;

  scanf("%d", &n);

  prnt(1, n);

  return 0;
}
