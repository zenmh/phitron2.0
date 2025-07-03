#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  sort(a.begin(), a.end());

  int q;
  cin >> q;

  while (q--)
  {
    int x;
    cin >> x;

    int l = 0, r = n - 1;
    bool flag = false;

    while (l < r)
    {
      int m = (l + r) / 2;

      if (a[m] == x)
      {
        flag = true;
        break;
      }
      else if (a[m] < x)
      {
        l = m + 1;
      }
      else
      {
        r = m - 1;
      }
    }

    flag ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
