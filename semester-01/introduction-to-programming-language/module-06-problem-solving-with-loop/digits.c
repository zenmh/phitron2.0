#include <stdio.h>

int main()
{

  int t;

  scanf("%d", &t);

  while (t--)
  {
    int n;

    scanf("%d", &n);

    do
    {
      printf("%d ", n % 10);

      n /= 10;
    } while (0 < n);

    printf("\n");
  }

  return 0;
}
