#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  while (q--)
  {
    int x, flag = 0;
    cin >> x;

    int l = 0, r = n - 1;
    while (l <= r)
    {
      int m = (l + r) / 2;

      if (a[m] == x)
      {
        flag = 1;
        break; // break is important
      }
      else if (a[m] > x)
      {
        r = m - 1;
      }
      else
      {
        l = m + 1;
      }
    }

    flag ? cout << "found" << endl : cout << "not found" << endl;
  }

  return 0;
}
