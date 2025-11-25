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

  ll l = 0, r = 0, sum = 0, ans = 0;

  while (l < n)
  {
    while (r < n && sum < s)
    {
      sum += a[r++];
    }

    if (sum >= s)
    {
      ans += n - r + 1;
    }

    sum -= a[l++];
  }

  cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}