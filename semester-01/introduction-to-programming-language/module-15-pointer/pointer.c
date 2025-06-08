#include <stdio.h>

int main()
{
  int x = 10;

  printf("Value of x is: %d\n", x);
  printf("Value of x is: %p\n", &x);

  int *x_address = &x;

  printf("Address: %p", x_address);

  return 0;
}
