#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  string s;
  cin >> s;

  map<string, int> m;

  for (int i = 1; i < n; i++)
  {
    string x;
    x += s[i - 1];
    x += s[i];

    m[x]++;
  }

  pair<string, int> p = {"", INT_MIN};

  for (auto it = m.begin(); it != m.end(); it++)
  {
    auto [key, val] = *it;

    if (val > p.second)
    {
      p = {key, val};
    }
  }

  cout << p.first;

  return 0;
}