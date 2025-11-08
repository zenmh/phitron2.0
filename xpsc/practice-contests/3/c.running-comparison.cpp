#include <bits/stdc++.h>

#define nl '\n'
#define ll long long
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

void slv()
{
  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    int a[n];

    for (int i = 0; i < n; i++)
    {
      cin >> a[i];
    }

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
      int x;
      cin >> x;

      int mn = min(a[i], x), mx = max(a[i], x);

      if (mx <= mn * 2)
      {
        cnt++;
      }
    }

    cout << cnt << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}