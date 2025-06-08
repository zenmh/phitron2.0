#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n = 3, a[n], mn = INT_MAX, mx = INT_MIN;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];

    mn = min(mn, a[i]);
    mx = max(mx, a[i]);
  }

  cout << mn << ' ' << mx;

  return 0;
}
