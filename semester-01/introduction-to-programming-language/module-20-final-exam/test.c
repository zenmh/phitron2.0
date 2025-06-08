#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j < n - i; j++) // space
    {
      printf(" ");
    }

    for (int j = 1; j < (i * 2); j++) // star
    {
      printf("*");
    }

    printf("\n");
  }

  return 0;
}
