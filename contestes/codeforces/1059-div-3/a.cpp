#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int mx = INT_MIN;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;
      mx = max(mx, x);
    }

    cout << mx << nl;
  }

  return 0;
}