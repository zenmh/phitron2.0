#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int x, y;
    cin >> x >> y;

    int s = 0;

    if (x && !y)
    {
      s = ceil(x / 15.0);
    }
    else if ((x && y) || (!x && y))
    {
      int r;

      if (y % 2)
      {
        s = (y / 2) + 1;
        r = (s * 7) + 4;
      }
      else
      {
        s = y / 2;
        r = s * 7;
      }

      if (x > r)
      {
        int d = x - r;
        s += ceil(d / 15.0);
      }
    }

    cout << s << endl;
  }

  return 0;
}
