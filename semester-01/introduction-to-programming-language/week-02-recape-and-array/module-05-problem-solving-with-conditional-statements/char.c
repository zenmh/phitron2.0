#include <stdio.h>

int main()
{
  char x;

  scanf("%c", &x);

  if (65 <= x && x <= 90)
  {
    printf("%c", x + 32);
  }
  else
  {
    printf("%c", x - 32);
  }

  return 0;
}
