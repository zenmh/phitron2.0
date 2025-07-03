#include <bits/stdc++.h>
using namespace std;

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int n, k;
    cin >> n >> k;

    long long low = 1, high = 1e10, ans = 0;

    while (low <= high)
    {
      long long mid = (low + high) / 2, cnt = mid - mid / n;

      if (cnt >= k)
      {
        ans = mid;
        high = mid - 1;
      }
      else
      {
        low = mid + 1;
      }
    }

    cout << ans << endl;
  }

  return 0;
}
