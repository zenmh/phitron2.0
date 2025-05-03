#include <stdio.h>
#include <string.h>

int main()
{
  char s[101];

  scanf("%s", s);

  int sz = strlen(s) - 1;

  if (s[0] == s[sz])
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}
