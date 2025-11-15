#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, q;
  cin >> n >> q;

  ll a[n], pref[n + 1];
  pref[0] = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    pref[i + 1] = pref[i] + a[i];
  }

  while (q--)
  {
    ll l, r, k;
    cin >> l >> r >> k;

    ((pref[n] - pref[r]) + pref[l - 1] + (r - l + 1) * k) % 2 ? cout << "YES\n" : cout << "NO\n";
  }
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