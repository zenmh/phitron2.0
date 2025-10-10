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

    string s;
    cin >> s;

    int fone = -1, lone = -1;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == '1')
      {
        fone = i;
        break;
      }
    }

    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] == '1')
      {
        lone = i;
        break;
      }
    }

    int cnt = 0;

    if (fone != -1 || lone != -1)
    {
      for (int i = fone; i <= lone; i++)
      {
        if (s[i] == '0')
        {
          cnt++;
        }
      }
    }

    cout << cnt << nl;
  }

  return 0;
}