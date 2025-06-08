#include <stdio.h>

void pt(int i, int n)
{

  if (i > n)
  {
    return;
  }

  printf("%d\n", i);

  pt(i + 1, n);
}

int main()
{
  int n;

  scanf("%d", &n);

  pt(1, n);

  return 0;
}
