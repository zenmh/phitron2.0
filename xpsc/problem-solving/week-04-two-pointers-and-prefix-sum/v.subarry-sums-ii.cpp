#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, x;
  cin >> n >> x;

  map<ll, ll> freq;
  freq[0]++;
  ll sum = 0, ans = 0;

  for (int i = 1; i <= n; i++)
  {
    int y;
    cin >> y;

    sum += y;
    ans += freq[sum - x];
    freq[sum]++;
  }

  cout << ans << nl;
}

int main()
{
  zenmh;
  run();
  return 0;
}