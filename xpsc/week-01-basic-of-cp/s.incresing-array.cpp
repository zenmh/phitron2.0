#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  int n;
  cin >> n;

  int x[n];

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  long long ans = 0;

  for (int i = 1; i < n; i++)
  {
    if (x[i - 1] > x[i])
    {
      int diff = x[i - 1] - x[i];
      x[i] += diff;
      ans += diff;
    }
  }

  cout << ans;

  return 0;
}