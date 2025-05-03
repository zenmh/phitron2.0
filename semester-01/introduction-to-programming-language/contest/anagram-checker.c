#include <stdio.h>

int main()
{
  char w1[101], w2[101];

  scanf("%s %s", w1, w2);

  int a1[26] = {0}, a2[26] = {0};

  for (int i = 0; w1[i] != '\0' || w2[i] != '\0'; i++)
  {
    int idx1 = w1[i] - 'a', idx2 = w2[i] - 'a';
    a1[idx1]++;
    a2[idx2]++;
  }

  int flag = 1;

  for (int i = 0; i < 26; i++)
  {
    if (a1[i] != a2[i])
    {
      flag = 0;
    }
  }

  if (flag)
  {
    printf("Yes");
  }
  else
  {
    printf("No");
  }

  return 0;
}
