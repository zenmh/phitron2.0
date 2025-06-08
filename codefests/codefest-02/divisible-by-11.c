#include <stdio.h>

int main()
{
  char s[102];

  scanf("%s", s);

  long long even = 0, odd = 0;

  for (int i = 0; s[i] != '\0'; i++)
  {
    if (i % 2 == 0)
    {
      odd += s[i] - '0';
    }
    else
    {
      even += s[i] - '0';
    }
  }

  long long diff = odd - even;

  if (diff % 11 == 0)
  {
    printf("YES");
  }
  else
  {
    printf("NO");
  }

  return 0;
}
