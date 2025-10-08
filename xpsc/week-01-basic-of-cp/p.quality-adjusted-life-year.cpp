#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  double ans = 0;

  while (n--)
  {
    float q, y;
    cin >> q >> y;
    ans += q * y;
  }

  cout << fixed << setprecision(3) << ans;

  return 0;
}