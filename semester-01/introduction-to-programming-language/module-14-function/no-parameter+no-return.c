#include <stdio.h>

void sum_func()
{
  int a, b;

  scanf("%d %d", &a, &b);

  int sum = a + b;

  printf("%d", sum);
}

int main()
{
  sum_func();

  return 0;
}
