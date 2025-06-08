#include <stdio.h>

int sum_func(int num1, int num2)
{
  int sum = num1 + num2;
  return sum;
}

int sub_func(int num1, int num2)
{
  int sub = num1 - num2;
  return sub;
}

int main()
{
  int sum = sum_func(20, 10), sub = sub_func(20, 10);

  printf("Sum = %d\nSub = %d", sum, sub);

  return 0;
}
