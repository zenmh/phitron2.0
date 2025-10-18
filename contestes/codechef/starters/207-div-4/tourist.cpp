#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  int t;
  cin >> t;

  while (t--)
  {
    int n, a, b;
    cin >> n >> a >> b;

    int ans = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      int x, y;
      cin >> x >> y;

      ans = min(ans, abs(a - x) + abs(b - y));
    }

    cout << ans << nl;
  }

  return 0;
}