#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

// This problem is not same as GeeksForGeeks. Cause, they maintain only implementation based solution.

void slv()
{
  int n, k;
  cin >> n >> k;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int l = 0, r = 0;
  ll ans = LLONG_MIN, sum = 0;

  while (r < n)
  {
    sum += a[r];

    if (r - l + 1 == k)
    {
      ans = max(ans, sum);
      sum -= a[l];
      l++, r++;
    }
    else
    {
      r++;
    }
  }

  cout << ans;
}

int main()
{
  fio;
  slv();
  return 0;
}