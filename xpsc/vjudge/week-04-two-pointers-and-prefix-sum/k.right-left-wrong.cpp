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
  ll prefix_sum_of_a[n + 1];
  prefix_sum_of_a[0] = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    prefix_sum_of_a[i + 1] = prefix_sum_of_a[i] + (1LL * a[i]);
  }

  string s;
  cin >> s;

  ll sum = 0;
  int l = 0, r = n - 1;

  while (l < r)
  {
    while (l < r && s[l] != 'L')
    {
      l++;
    }

    while (l < r && s[r] != 'R')
    {
      r--;
    }

    if (l < r)
    {
      sum += prefix_sum_of_a[r + 1] - prefix_sum_of_a[l];
      l++, r--;
    }
  }

  cout << sum << nl;
}

int main()
{
  zenmh;

  int t;
  cin >> t;

  while (t--)
  {
    run();
  }

  return 0;
}