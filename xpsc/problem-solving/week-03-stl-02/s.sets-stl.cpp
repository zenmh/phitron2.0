#include <bits/stdc++.h>

#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int q;
  cin >> q;

  set<int> s;

  while (q--)
  {
    int x, y;
    cin >> x >> y;

    switch (x)
    {
    case 1:
    {
      s.insert(y);
      break;
    }

    case 2:
    {
      s.count(y) && s.erase(y);
      break;
    }

    default:
    {
      s.count(y) ? cout << "Yes\n" : cout << "No\n";
      break;
    }
    }
  }

  return 0;
}