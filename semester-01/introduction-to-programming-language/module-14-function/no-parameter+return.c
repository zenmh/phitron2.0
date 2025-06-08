#include <stdio.h>

int sum_func()
{
  int a, b;

  scanf("%d %d", &a, &b);

  int sum = a + b;

  return sum;
}

int main()
{
  int sum = sum_func();

  printf("%d", sum);

  return 0;
}
