#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  cin >> n;
  cout << ((n - 1) / 2) * ((n - 2) / 2) << nl;
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