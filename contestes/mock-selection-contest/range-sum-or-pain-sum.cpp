#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  ll n, q;
  cin >> n >> q;

  ll a[n];

  ll trc = 1;

  for (ll i = 0; i < n; i += 2)
  {
    a[i] = trc;
    a[i + 1] = trc++;
  }

  for (ll i = 1; i < n; i++)
  {
    a[i] += a[i - 1];
  }

  while (q--)
  {
    ll l, r;
    cin >> l >> r;

    l--;
    r--;

    !l ? cout << a[r] << '\n' : cout << a[r] - a[l - 1] << '\n';
  }

  return 0;
}