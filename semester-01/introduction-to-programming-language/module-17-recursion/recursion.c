#include <stdio.h>

// NOTE: Don't run. You will fall in a infinite loop.

void hello()
{
  printf("Hello\n");
  hello();
}

int main()
{
  hello();

  return 0;
}
