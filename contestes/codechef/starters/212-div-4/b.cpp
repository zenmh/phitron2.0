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

    int cnt = 0;
    bool flag = false;

    for (char c : s)
    {
      if (c == '0')
      {
        flag = true;
      }

      if (flag && c == '1')
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