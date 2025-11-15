#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n, k;
  string s;
  cin >> n >> k >> s;

  int i = 0, cnt = 0;

  while (i < n)
  {
    if (s[i] == 'B')
    {
      i += k, cnt++;
    }
    else
    {
      i++;
    }
  }

  cout << cnt << nl;
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