#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n = 5;
  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (j == 3)
      {
        break;
      }
      cout << "J --> " << j << endl;
    }
    cout << "I --> " << i << endl;
  }

  return 0;
}
