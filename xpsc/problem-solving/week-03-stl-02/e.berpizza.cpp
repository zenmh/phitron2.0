#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int q;
  cin >> q;

  int sl = 1;
  set<pair<int, int>> s1, s2;

  while (q--)
  {
    int x;
    cin >> x;

    switch (x)
    {
    case 1:
    {
      int m;
      cin >> m;
      s1.insert({sl, m}), s2.insert({m, -sl++});
      break;
    }

    case 2:
    {
      auto [a, b] = *s1.begin();
      cout << a << ' ';
      s1.erase(s1.begin()), s2.erase({b, -a});

      break;
    }

    default:
    {
      auto [a, b] = *s2.rbegin();
      cout << -b << ' ';
      s2.erase(--s2.end());
      s1.erase({-b, a});
      break;
    }
    }
  }

  return 0;
}