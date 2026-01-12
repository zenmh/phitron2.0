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

  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll l = 0, r = 0, sum = 0, ans = -1;

  while (r < n)
  {
    sum += a[r++];

    while (l < r && sum > s)
    {
      sum -= a[l++];
    }

    if (sum == s)
    {
      ans = max(ans, r - l);
    }
  }

  ans == -1 ? cout << ans << nl : cout << n - ans << nl;
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