#include <bits/stdc++.h>

#define nl '\n';
#define fast() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fast();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++)
    {
      int a;
      cin >> a;
      cout << (n - a) + 1 << ' ';
    }

    cout << nl;
  }

  return 0;
}