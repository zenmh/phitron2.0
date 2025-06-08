#include <stdio.h>

void pt(int i)
{
  if (i == 6)
  {
    return;
  }

  pt(i + 1);

  printf("%d ", i);
}

int main()
{
  pt(1);

  return 0;
}
