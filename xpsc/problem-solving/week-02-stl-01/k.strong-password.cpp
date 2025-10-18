#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    bool updated = false;

    for (int i = 1; i < s.size(); i++)
    {
      if (s[i - 1] == s[i])
      {
        char c = s[i] + 1;

        if (c > 'z')
        {
          c = 'a';
        }

        s.insert(s.begin() + i, c);
        updated = true;
        break;
      }
    }

    if (!updated)
    {
      char c = s.back() + 1;

      if (c > 'z')
      {
        c = 'a';
      }

      s += c;
    }

    cout << s << nl;
  }

  return 0;
}