#include <stdio.h>
#include <string.h>

int main()
{
  int t;

  scanf("%d", &t);

  while (t--)
  {
    char s[1001];

    scanf("%s", s);

    int cnt[26] = {0};

    for (int i = 0; s[i] != '\0'; i++)
    {
      int idx = s[i] - 'a';
      cnt[idx]++;
    }

    int need = 0;

    for (int i = 0; i < 26; i++)
    {
      if (cnt[i] % 2)
      {
        need++;
      }
    }

    if (need == 0)
    {
      printf("%d\n", need);
    }
    else
    {
      printf("%d\n", need - 1);
    }
  }

  return 0;
}
