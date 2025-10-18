#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  vector<pair<string, string>> v;

  while (n--)
  {
    pair<string, string> p;
    cin >> p.first >> p.second;

    auto it = find(v.begin(), v.end(), p);

    if (it == v.end())
    {
      v.push_back(p);
    }
  }

  cout << v.size();

  return 0;
}