#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void slv()
{
  int n, m;
  cin >> n >> m;

  multiset<int> h;

  while (n--)
  {
    int x;
    cin >> x;
    h.insert(x);
  }

  while (m--)
  {
    int t;
    cin >> t;

    auto it = h.upper_bound(t);

    if (it == h.begin())
    {
      cout << -1 << nl;
    }
    else
    {
      cout << *--it << nl;
      h.erase(it);
    }
  }
}

int main()
{
  fio;
  slv();
  return 0;
}