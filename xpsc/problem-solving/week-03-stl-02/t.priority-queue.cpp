#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int n, q;
  cin >> n >> q;

  vector<priority_queue<int>> v(n);

  while (q--)
  {
    int p, t;
    cin >> p >> t;

    if (!p)
    {
      int x;
      cin >> x;
      v[t].push(x);
    }
    else if (p == 1)
    {
      if (!v[t].empty())
      {
        cout << v[t].top() << nl;
      }
    }
    else
    {
      if (!v[t].empty())
      {
        v[t].pop();
      }
    }
  }
}

int main()
{
  fio;
  slv();
  return 0;
}