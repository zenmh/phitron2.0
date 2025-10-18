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
    int n;
    cin >> n;

    string b;
    int cnt[26] = {0};

    for (int i = 0; i < n; i++)
    {
      char c;
      cin >> c;
      b += c;
      cnt[c - 'a']++;
    }

    string r;

    for (int i = 0; i < 26; i++)
    {
      if (cnt[i])
      {
        r += char(i + 'a');
      }
    }

    map<char, char> m;

    for (int i = 0, j = r.size() - 1; i < r.size(); i++, j--)
    {
      m[r[i]] = r[j];
    }

    for (int i = 0; i < n; i++)
    {
      b[i] = m[b[i]];
    }

    cout << b << nl;
  }

  return 0;
}