#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  ll n, s;
  cin >> n >> s;

  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll l = 0, r = 0, sum = 0, ans = LLONG_MAX;

  while (r < n)
  {
    sum += a[r++];

    while (l < r && sum >= s)
    {
      ans = min(ans, r - l);
      sum -= a[l++];
    }
  }

  ans == LLONG_MAX ? cout << -1 : cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}