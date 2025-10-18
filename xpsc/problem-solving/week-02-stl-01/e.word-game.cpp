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

    map<string, int> m;
    set<string> s1, s2, s3;

    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      s1.insert(s);
      m[s]++;
    }

    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      s2.insert(s);
      m[s]++;
    }

    for (int i = 0; i < n; i++)
    {
      string s;
      cin >> s;
      s3.insert(s);
      m[s]++;
    }

    int p1 = 0, p2 = 0, p3 = 0;

    for (auto it = m.begin(); it != m.end(); it++)
    {
      auto [key, val] = *it;

      if (val == 1)
      {
        if (s1.count(key))
        {
          p1 += 3;
        }
        else if (s2.count(key))
        {
          p2 += 3;
        }
        else
        {
          p3 += 3;
        }
      }
      else if (val == 2)
      {
        if (s1.count(key))
        {
          p1++;
        }

        if (s2.count(key))
        {
          p2++;
        }

        if (s3.count(key))
        {
          p3++;
        }
      }
    }

    cout << p1 << ' ' << p2 << ' ' << p3 << nl;
  }

  return 0;
}