#include <stdio.h>

int main()
{
  int a, b;

  scanf("%d %d", &a, &b);

  printf("%d + %d = %d\n%d * %d = %lld\n%d - %d = %d", a, b, a + b, a, b, a * b, a, b, a - b);

  return 0;
}
