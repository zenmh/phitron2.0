#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, x;
  cin >> n >> x;

  if (n < 3)
  {
    cout << "IMPOSSIBLE";
    return;
  }

  pair<int, int> a[n];

  for (int i = 0; i < n; i++)
  {
    int y;
    cin >> y;
    a[i] = {y, i};
  }

  sort(a, a + n);

  for (int i = 0; i < n - 2; i++)
  {
    int l = i + 1, r = n - 1;

    while (l < r)
    {
      if (a[i].first + a[l].first + a[r].first == x)
      {
        int ans[3];
        ans[0] = a[i].second + 1;
        ans[1] = a[l].second + 1;
        ans[2] = a[r].second + 1;

        sort(ans, ans + 3);

        cout << ans[0] << ' ' << ans[1] << ' ' << ans[2];

        return;
      }
      else if (a[i].first + a[l].first + a[r].first < x)
      {
        l++;
      }
      else
      {
        r--;
      }
    }
  }

  cout << "IMPOSSIBLE";
}

int main()
{
  zenmh;
  run();
  return 0;
}