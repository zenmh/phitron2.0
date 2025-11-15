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

    string s;
    cin >> s;

    int ans = n;

    for (int i = 0, j = n - 1; i < j; i++, j--)
    {
      if (s[i] == s[j])
      {
        break;
      }

      ans -= 2;
    }

    cout << ans << nl;
  }
}

int main()
{
  fio;
  slv();
  return 0;
}