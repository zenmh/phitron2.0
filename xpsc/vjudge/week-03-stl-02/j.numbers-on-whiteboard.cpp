#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int x = n;

    cout << 2 << nl;

    for (int i = n - 1; i >= 1; i--)
    {
      cout << i << ' ' << x << nl;
      x = ceil((x + i) / 2.0);
    }
  }

  return 0;
}