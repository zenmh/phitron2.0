#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  cin >> n;

  ll a[n], b[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> b[i];
  }

  int flag = 1;

  for (int i = 0; i < n - 1; i++)
  {
    if (((a[i + 1] - a[i]) * (b[i + 1] - b[i])) < 0)
    {
      flag = 0;
      break;
    }
  }

  flag ? cout << "YES\n" : cout << "NO\n";
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