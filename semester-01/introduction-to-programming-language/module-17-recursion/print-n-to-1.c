#include <stdio.h>

void pt(int n)
{
  if (n == 0)
  {
    return;
  }

  printf("%d ", n);

  pt(--n);
}

int main()
{
  int n;

  scanf("%d", &n);

  pt(n);

  return 0;
}
