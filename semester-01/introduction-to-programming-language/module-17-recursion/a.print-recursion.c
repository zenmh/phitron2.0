#include <stdio.h>

void pt(int n)
{

  if (n == 0)
  {
    return;
  }

  printf("I love Recursion\n");

  pt(n - 1);
}

int main()
{
  int n;

  scanf("%d", &n);

  pt(n);

  return 0;
}
