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
    int n;
    cin >> n;

    multiset<ll> ms;
    ll ans = 0;

    while (n--)
    {
      ll x;
      cin >> x;

      if (!x)
      {
        if (!ms.empty())
        {
          ans += *--ms.end();
          ms.erase(--ms.end());
        }
      }
      else
      {
        ms.insert(x);
      }
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