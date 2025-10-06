#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  set<ll> s;
  map<ll, pair<int, int>> m;

  for (int i = 1; i <= n; i++)
  {
    ll x;
    cin >> x;

    s.insert(x);

    if (m.count(x))
    {
      m[x] = {m[x].first, i};
    }
    else
    {
      m[x] = {i, i};
    }
  }

  for (auto it = m.begin(); it != m.end(); it++)
  {
    cout << it->first << ' ' << it->second.first << ' ' << it->second.second << '\n';
  }

  return 0;
}