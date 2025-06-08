#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  if (n > 1000)
  {
    printf("I will buy Punjabi");

    n -= 1000;

    if (n >= 500)
    {
      printf("\nI will buy new shoes\nAlisa will buy new shoes");
    }
  }
  else
  {
    printf("Bad luck!");
  }

  return 0;
}
