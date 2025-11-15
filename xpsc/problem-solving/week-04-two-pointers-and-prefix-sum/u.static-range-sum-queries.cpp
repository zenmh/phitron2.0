#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, q;
  cin >> n >> q;

  ll x[n], pref_sum[n + 1];
  pref_sum[0] = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
    pref_sum[i + 1] = pref_sum[i] + x[i];
  }

  while (q--)
  {
    int a, b;
    cin >> a >> b;
    cout << pref_sum[b] - pref_sum[--a] << nl;
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}