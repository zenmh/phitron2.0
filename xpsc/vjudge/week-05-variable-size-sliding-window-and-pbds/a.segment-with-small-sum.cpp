#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  ll s;
  cin >> n >> s;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll sum = 0;
  int l = 0, r = 0, ans = 0;

  while (r < n)
  {
    sum += a[r];

    if (sum <= s)
    {
      ans = max(ans, r - l + 1);
    }
    else
    {
      sum -= a[l++];
    }

    r++;
  }

  cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}