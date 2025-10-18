#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;
using ll = long long;

int main()
{
  fast();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    ll a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    ll dp[n];

    dp[0] = a[0];

    for (int i = 1; i < n; i++)
    {
      ll cost1 = a[i] + dp[i - 1];

      if (i - 1 >= 0)
      {
        ll cost2 = abs(a[i] - a[i - 1]);
        if (i - 2 >= 0)
        {
          cost2 += a[i - 2];
        }
        if (i - 3 >= 0)
        {
          cost2 += a[i - 3];
        }
        dp[i] = min(cost1, cost2);
      }
    }

    cout << dp[n - 1] << nl;
  }

  return 0;
}