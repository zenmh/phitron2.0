#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<pair<string, int>> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i].first >> v[i].second;
  }

  for (auto x : v)
  {
    cout << x.first << ' ' << x.second << endl;
  }

  return 0;
}
