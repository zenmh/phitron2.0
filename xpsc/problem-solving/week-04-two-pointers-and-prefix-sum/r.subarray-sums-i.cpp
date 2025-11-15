#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, x;
  cin >> n >> x;

  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll l = 0, r = 0, sum = 0, cnt = 0;

  while (r < n)
  {
    sum += a[r];

    while (l <= r && sum > x)
    {
      sum -= a[l++];
    }

    if (sum == x)
    {
      cnt++;
    }

    r++;
  }

  cout << cnt;
}

int main()
{
  zenmh;
  run();
  return 0;
}