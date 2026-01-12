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
  ll sum = 0;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    sum += abs(a[i]);
  }

  int i = 0, move = 0;

  while (i < n)
  {
    if (a[i] < 0)
    {
      while (i < n && a[i] <= 0)
      {
        i++;
      }
      move++;
    }
    else
    {
      i++;
    }
  }

  cout << sum << ' ' << move << nl;
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