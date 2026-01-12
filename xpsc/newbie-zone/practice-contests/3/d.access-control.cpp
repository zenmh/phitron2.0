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
    string s;
    cin >> n >> x >> s;

    if (s[0] == '0')
    {
      cout << "NO\n";
      continue;
    }

    int swipes = x, flag = 1;

    for (int i = 1; i < n; i++)
    {
      if (s[i] == '1')
      {
        swipes = x;
      }
      else
      {
        if (swipes > 0)
        {
          swipes--;
        }
        else
        {
          cout << "NO\n";
          flag--;
          break;
        }
      }
    }

    flag &&cout << "YES\n";
  }
}

int main()
{
  fio;
  slv();
  return 0;
}