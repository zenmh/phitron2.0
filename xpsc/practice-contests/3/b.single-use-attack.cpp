#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int t;
  cin >> t;

  while (t--)
  {
    int h, x, y;
    cin >> h >> x >> y;

    h -= y;

    int ans = 1;

    if (h > 0)
    {
      ans += ceil(h * 1.0 / x);
    }

    cout << ans << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}