#include <stdio.h>
#include <math.h>

int main()
{
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= ceil((10 + n) / 2) + 1; i++)
  {
    for (int j = ((11 + n) / 2) - i; j > 0; j--)
    {
      printf(" ");
    }

    for (int j = 1; j < i * 2; j++)
    {
      printf("*");
    }

    printf("\n");
  }

  for (int i = 0; i < 5; i++)
  {
    printf("     ");

    for (int i = 0; i < n; i++)
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
