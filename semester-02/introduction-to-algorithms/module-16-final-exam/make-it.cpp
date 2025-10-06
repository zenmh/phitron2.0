#include <bits/stdc++.h>

using namespace std;

int main()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int flag = 0;

    while (n >= 1)
    {
      if (n == 1)
      {
        flag = true;
      }

      if (n % 2)
      {
        n -= 3;
      }
      else
      {
        n /= 2;
      }
    }

    flag ? cout << "YES\n" : cout << "NO\n";
  }

  return 0;
}