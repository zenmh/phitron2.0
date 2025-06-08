#include <stdio.h>
#include <limits.h>

int main()
{
  int n;

  scanf("%d", &n);

  int a[n];
  int lowest_number = INT_MAX, lowest_number_position;

  for (int i = 0; i < n; i++)
  {
    scanf("%d", &a[i]);

    if (a[i] < lowest_number)
    {
      lowest_number = a[i];
      lowest_number_position = i + 1;
    }
  }

  printf("%d %d", lowest_number, lowest_number_position);

  return 0;
}
