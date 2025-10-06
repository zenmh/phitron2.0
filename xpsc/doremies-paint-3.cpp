#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    map<int, int> m;

    while (n--)
    {
      int x;
      cin >> x;
      m[x]++;
    }

    int flag = 1;

    if (m.size() > 2)
    {
      flag = 0;
    }
    else
    {
      if (m.size() == 2)
      {
        auto it = m.begin();
        int cnt1 = it->second;
        advance(it, 1);
        int cnt2 = it->second;

        if (abs(cnt1 - cnt2) > 1)
        {
          flag = 0;
        }
      }
    }

    flag ? cout << "Yes\n" : cout << "No\n";
  }

  return 0;
}