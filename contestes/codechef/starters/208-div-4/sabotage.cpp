#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    int n, x, k;
    cin >> n >> x >> k;

    x += k * 100;

    vector<int> a;

    for (int i = 0; i < n; i++)
    {
      int b;
      cin >> b;
      a.push_back(b);
    }

    a.push_back(x);

    sort(a.begin(), a.end());

    while (k--)
    {
      a.pop_back();
    }

    int ans = 1;

    if (a.back() > x)
    {
      for (int i = a.size() - 1; a[i] != x; i--)
      {
        ans++;
      }
    }

    cout << ans << nl;
  }

  return 0;
}