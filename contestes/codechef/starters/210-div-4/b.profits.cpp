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
    int n, x;
    cin >> n >> x;

    x < n ? cout << (((n * (n + 1)) / 2) - ((x * (x + 1)) / 2)) - ((n - x) * x) << nl : cout << 0 << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}