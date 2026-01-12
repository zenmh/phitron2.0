#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n, k;
    cin >> n >> k;

    map<int, set<int>> mp;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mp[x].insert(i);
    }

    while (k--)
    {
      int a, b;
      cin >> a >> b;

      if (mp.count(a) && mp.count(b))
      {
        *mp[a].begin() < *mp[b].rbegin() ? cout << "YES\n" : cout << "NO\n";
      }
      else
      {
        cout << "NO\n";
      }
    }
  }

  return 0;
}