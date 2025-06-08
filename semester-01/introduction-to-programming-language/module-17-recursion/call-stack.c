#include <stdio.h>

void mello()
{
  printf("Mello\n");
}

void gello()
{
  printf("Gello\n");
  mello();
}

void hello()
{
  printf("Hello\n");
  gello();
}

int main()
{
  printf("Main\n");

  hello();

  return 0;
}
