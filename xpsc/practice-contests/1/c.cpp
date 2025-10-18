#include <bits/stdc++.h>

#define nl '\n';
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

    int a[n], b[n], cnt = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    for (int i = 0; i < n; i++)
    {
      cin >> b[i];

      int mn = min(a[i], b[i]), mx = max(a[i], b[i]);

      if (mx <= mn * 2)
      {
        cnt++;
      }
    }

    cout << cnt << nl;
  }

  return 0;
}