#include <stdio.h>

void pt(int n)
{
  if (n == 0)
  {
    return;
  }

  if (n == 1)
  {
    printf("%d", n);
  }
  else
  {
    printf("%d ", n);
  }

  pt(n - 1);
}

int main()
{
  int n;

  scanf("%d", &n);

  pt(n);

  return 0;
}
