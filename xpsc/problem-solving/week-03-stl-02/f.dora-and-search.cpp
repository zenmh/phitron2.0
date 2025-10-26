#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int a[n];
    set<int> s;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
      s.insert(a[i]);
    }

    int l = 0, r = n - 1, flag = 0;

    while (l < r)
    {
      int mn = *s.begin(), mx = *--s.end();

      if (a[l] != mn && a[l] != mx && a[r] != mn && a[r] != mx)
      {
        cout << l + 1 << ' ' << r + 1;
        flag = 1;
        break;
      }
      else
      {
        if (a[l] == mn || a[l] == mx)
        {
          s.erase(a[l]);
          l++;
        }
        else if (a[r] == mn || a[r] == mx)
        {
          s.erase(a[r]);
          r--;
        }
      }
    }

    if (!flag)
    {
      cout << -1;
    }

    cout << nl;
  }

  return 0;
}