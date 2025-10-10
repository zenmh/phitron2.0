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

    int mn_dis = INT_MAX;

    for (int i = 0; i < n; i++)
    {
      int x, y;
      cin >> x >> y;

      if (x != a && x != b && y != a && y != b)
      {
        mn_dis = min(mn_dis, abs(x - a) + abs(y - b));
      }
    }

    mn_dis == INT_MAX ? cout << 0 : cout << mn_dis;
    cout << nl;
  }

  return 0;
}