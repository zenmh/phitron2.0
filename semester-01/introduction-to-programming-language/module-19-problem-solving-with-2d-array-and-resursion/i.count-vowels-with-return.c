#include <stdio.h>

int count(char s[], int i)
{
  if (s[i] == '\0')
  {
    return 0;
  }

  int cnt = count(s, i + 1);

  if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' || s[i] == 'A' || s[i] == 'E' || s[i] == 'I' || s[i] == 'O' || s[i] == 'U')
  {
    return cnt + 1;
  }
  else
  {
    return cnt;
  }
}

int main()
{

  char s[201];

  fgets(s, 201, stdin);

  printf("%d", count(s, 0));

  return 0;
}
