#include <stdio.h>

int count = 0;

void count_vowel(char s[], int i)
{
  if (s[i] == '\0')
  {
    return;
  }

  if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
  {
    count++;
  }

  count_vowel(s, i + 1);
}

int main()
{
  int n = 201;
  char s[n];

  fgets(s, n, stdin);

  count_vowel(s, 0);

  printf("%d", count);

  return 0;
}
