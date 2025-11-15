#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  ll n, k, q;
  cin >> n >> k >> q;

  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll ans = 0, curr_len = 0;

  for (int i = 0; i < n; i++)
  {
    if (a[i] <= q)
    {
      curr_len++;
    }
    else
    {
      if (curr_len >= k)
      {
        ll lenth = curr_len - k + 1;
        ans += (lenth * (lenth + 1)) / 2;
      }

      curr_len = 0;
    }
  }

  if (curr_len >= k)
  {
    ll lenth = curr_len - k + 1;
    ans += (lenth * (lenth + 1)) / 2;
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