#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int n, m;
  cin >> n >> m;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  set<int> s;
  int dp[n] = {0};
  dp[n - 1]++;
  s.insert(a[n - 1]);

  for (int i = n - 2; i >= 0; i--)
  {
    if (s.count(a[i]))
    {
      dp[i] = dp[i + 1];
    }
    else
    {
      dp[i] = dp[i + 1] + 1;
      s.insert(a[i]);
    }
  }

  while (m--)
  {
    int l;
    cin >> l;
    l--;

    cout << dp[l] << nl;
  }

  return 0;
}