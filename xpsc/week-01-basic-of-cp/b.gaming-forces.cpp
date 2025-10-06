#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int h[n];

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      cin >> h[i];
      if (h[i] == 1)
      {
        cnt++;
      }
    }

    int ans = 0;

    ans += (cnt / 2) + (n - cnt);

    if (cnt % 2)
    {
      ans++;
    }

    cout << ans << '\n';
  }

  return 0;
}