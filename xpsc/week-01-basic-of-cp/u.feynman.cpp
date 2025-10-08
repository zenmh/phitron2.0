#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  while (1)
  {
    int n;
    cin >> n;

    if (!n)
    {
      return 0;
    }

    cout << (n * (n + 1) * ((2 * n) + 1)) / 6 << nl;
  }

  return 0;
}