#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    set<int> s;

    for (int i = n - 1; i >= 0; i--)
    {
      if (s.count(a[i]))
      {
        break;
      }

      s.insert(a[i]);
    }

    cout << n - s.size() << nl;
  }

  return 0;
}