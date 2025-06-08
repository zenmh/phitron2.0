#include <stdio.h>

int main()
{
  int l, r;

  scanf("%d %d", &l, &r);

  int flag = 0;

  for (int i = l; i <= r; i++)
  {
    int even = 0, odd = 0, num = i;

    while (num)
    {
      int dig = num % 10;

      num /= 10;

      if (dig % 2)
      {
        odd++;
      }
      else
      {
        even++;
      }
    }

    if (even == odd)
    {
      printf("%d\n", i);
      flag = 1;
    }
  }

  if (flag == 0)
  {
    printf("-1");
  }

  return 0;
}
