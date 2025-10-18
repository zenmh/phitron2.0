#include <bits/stdc++.h>

#define nl '\n';
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    string s;
    cin >> s;

    int fb = -1, lb = -1;

    for (int i = 0; i < n; i++)
    {
      if (s[i] == 'B')
      {
        fb = i;
        break;
      }
    }

    for (int i = n - 1; i >= 0; i--)
    {
      if (s[i] == 'B')
      {
        lb = i;
        break;
      }
    }

    cout << abs(fb - lb) + 1 << nl;
  }

  return 0;
}