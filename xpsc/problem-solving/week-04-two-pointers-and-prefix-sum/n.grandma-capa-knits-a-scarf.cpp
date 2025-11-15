#include <bits/stdc++.h>

using namespace std;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

void run()
{
  int n;
  string s;
  cin >> n >> s;

  ll ans = LLONG_MAX;

  for (char i = 'a'; i <= 'z'; i++)
  {
    int l = 0, r = n - 1, cnt = 0, flag = 1;

    while (l < r)
    {
      if (s[l] == s[r])
      {
        l++, r--;
      }
      else if (s[l] == i)
      {
        cnt++, l++;
      }
      else if (s[r] == i)
      {
        cnt++, r--;
      }
      else
      {
        flag = 0;
        break;
      }
    }

    if (flag)
    {
      ans = min(ans, (ll)cnt);
    }
  }

  ans == LLONG_MAX ? cout << -1 << nl : cout << ans << nl;
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