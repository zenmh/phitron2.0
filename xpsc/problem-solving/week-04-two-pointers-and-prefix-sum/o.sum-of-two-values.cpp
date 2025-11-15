#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, x;
  cin >> n >> x;

  pair<int, int> a[n];

  for (int i = 0; i < n; i++)
  {
    int y;
    cin >> y;
    a[i] = {y, i};
  }

  sort(a, a + n);

  int l = 0, r = n - 1;

  while (l < r)
  {
    if (a[l].first + a[r].first == x)
    {
      cout << min(a[l].second, a[r].second) + 1 << ' ' << max(a[l].second, a[r].second) + 1;
      return;
    }
    else if (a[l].first + a[r].first < x)
    {
      l++;
    }
    else
    {
      r--;
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