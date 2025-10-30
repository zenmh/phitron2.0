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
    int n, m;
    cin >> n >> m;

    string s;
    cin >> s;

    set<int> ind;

    for (int i = 0; i < m; i++)
    {
      int x;
      cin >> x;
      ind.insert(x);
    }

    string c;
    cin >> c;

    sort(c.begin(), c.end());

    vector<int> v;

    for (int x : ind)
    {
      v.push_back(x);
    }

    for (int i = 0; i < v.size(); i++)
    {
      s[v[i] - 1] = c[i];
    }

    cout << s << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}