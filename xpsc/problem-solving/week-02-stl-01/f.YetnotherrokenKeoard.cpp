#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

class Cmp
{
public:
  bool operator()(pair<char, int> l, pair<char, int> r)
  {
    return l.second < r.second;
  }
};

int main()
{
  fastio();

  int t;
  cin >> t;

  while (t--)
  {
    string s;
    cin >> s;

    vector<pair<char, int>> sml, cap;

    for (int i = 0; i < s.size(); i++)
    {
      if (s[i] >= 'a' && s[i] <= 'z')
      {
        if (s[i] == 'b')
        {
          if (!sml.empty())
          {
            sml.pop_back();
          }
        }
        else
        {
          sml.push_back({s[i], i});
        }
      }
      else
      {
        if (s[i] == 'B')
        {
          if (!cap.empty())
          {
            cap.pop_back();
          }
        }
        else
        {
          cap.push_back({s[i], i});
        }
      }
    }

    sml.insert(sml.end(), cap.begin(), cap.end());
    sort(sml.begin(), sml.end(), Cmp());

    for (auto [c, i] : sml)
    {
      cout << c;
    }

    cout << nl;
  }

  return 0;
}