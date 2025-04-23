#include <stdio.h>

int main()
{
  int x = 0;

  do
  {
    scanf("%d", &x);

    if (x == 1999)
    {
      printf("Correct");

      break;
    }
    else
    {
      printf("Wrong\n");
    }
  } while (x > 0);

  return 0;
}
