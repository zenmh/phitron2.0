#include <stdio.h>

int main()
{
  char s[78];

  scanf("%s", s);

  int a[26] = {0};

  for (int i = 0; s[i] != '\0'; i++)
  {
    int idx = s[i] - 'a';
    a[idx]++;
  }

  for (int i = 0; i < 26; i++)
  {
    if (a[i] == 2)
      printf("%c", i + 'a');
  }

  return 0;
}
