#include <stdio.h>

void sum_func(int a, int b)
{
  int sum = a + b;

  printf("%d", sum);
}

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);

  sum_func(a, b);

  return 0;
}
