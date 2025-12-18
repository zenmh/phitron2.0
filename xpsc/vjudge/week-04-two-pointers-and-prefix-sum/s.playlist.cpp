#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  set<int> s;
  int l = 0, r = 0, ans = 0;

  while (r < n)
  {
    while (s.count(a[r]))
    {
      s.erase(a[l++]);
    }

    s.insert(a[r++]);
    ans = max(ans, (int)s.size());
  }

  cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}