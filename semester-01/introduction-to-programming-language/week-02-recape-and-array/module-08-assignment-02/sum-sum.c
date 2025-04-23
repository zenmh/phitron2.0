#include <stdio.h>

int main()
{
  int n;

  scanf("%d", &n);

  int positive_sum = 0, negative_sum = 0;

  while (n--)
  {
    int v;

    scanf("%d", &v);

    if (v > 0)
    {
      positive_sum += v;
    }
    else
    {
      negative_sum += v;
    }
  }

  printf("%d %d", positive_sum, negative_sum);

  return 0;
}
