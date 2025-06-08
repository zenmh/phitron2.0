#include <stdio.h>

void fun(int *x)
{
  *x = 20;

  printf("Value of x from fun function: %d\n", *x);
  printf("Address of x from fun function: %p\n", x);
}

int main()
{
  int x = 10;

  fun(&x);

  printf("Value of x from main function: %d\n", x);
  printf("Address of x from main function: %p\n", &x);

  return 0;
}
