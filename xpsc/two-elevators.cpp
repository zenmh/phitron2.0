#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    if (a == 1)
    {
      cout << 1;
    }
    else
    {
      int ft = abs(a - 1), st;

      if (b < c)
      {
        st = (c - b) + (c - 1);
      }
      else
      {
        st = b - 1;
      }

      if (ft < st)
      {
        cout << 1;
      }
      else if (ft > st)
      {
        cout << 2;
      }
      else
      {
        cout << 3;
      }
    }

    cout << endl;
  }

  return 0;
}
