#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int x, y, z;
  cin >> x >> y >> z;

  pair<int, int> friends_range = {x - y, x + y},
                 travel_range = {x - z, x + z};

  int ans = 0,
      l = max(friends_range.first, travel_range.first),
      r = min(friends_range.second, travel_range.second);

  if (l <= r)
  {
    ans = r - l + 1;
  }

  if (x >= l && x <= r)
  {
    ans--;
  }

  cout << ans << nl;
}

int main()
{
  zenmh;

  int t;
  cin >> t;

  while (t--)
  {
    run();
  }

  return 0;
}