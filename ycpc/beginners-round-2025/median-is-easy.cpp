#include <bits/stdc++.h>

using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n;
    cin >> n;

    vector<long long> a;

    for (int i = 0; i < n; i++)
    {
      long long x;
      cin >> x;
      a.push_back(x);
    }

    vector<int> b;

    for (long long x : a)
    {
      b.push_back(x % 10);
    }

    for (int i = 0; i < n; i++)
    {
      vector<int> c;

      for (int j = 0; j <= i; j++)
      {
        c.push_back(b[j]);
      }

      sort(c.begin(), c.end());

      int sz = c.size(), mid;

      if (sz == 2)
      {
        mid = min(c[0], c[1]);
      }
      else if (sz % 2)
      {
        mid = c[sz / 2];
      }
      else
      {
        mid = min(c[sz / 2], c[(sz / 2) + 1]);
      }

      cout << mid << ' ';
    }

    cout << endl;
  }
  return 0;
}
