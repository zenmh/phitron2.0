#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  ll k;
  cin >> n >> k;

  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll ans = 0;
  int l = 0, r = 0;
  multiset<ll> ms;

  while (r < n)
  {
    ms.insert(a[r]);

    if (*ms.rbegin() - *ms.begin() <= k)
    {
      ans += r - l + 1;
    }
    else
    {
      while (l <= r)
      {
        if (*ms.rbegin() - *ms.begin() <= k)
        {
          break;
        }

        ms.erase(ms.find(a[l++]));
      }

      if (*ms.rbegin() - *ms.begin() <= k)
      {
        ans += r - l + 1;
      }
    }

    r++;
  }

  cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}