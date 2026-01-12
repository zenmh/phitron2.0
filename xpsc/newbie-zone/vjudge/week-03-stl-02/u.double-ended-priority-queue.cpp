#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int n, q;
  cin >> n >> q;

  multiset<int> ms;

  while (n--)
  {
    int x;
    cin >> x;
    ms.insert(x);
  }

  while (q--)
  {
    int x;
    cin >> x;

    switch (x)
    {
    case 0:
    {
      int y;
      cin >> y;
      ms.insert(y);
      break;
    }

    case 1:
    {
      cout << *ms.begin() << nl;
      ms.erase(ms.begin());
      break;
    }

    default:
    {
      cout << *ms.rbegin() << nl;
      ms.erase(--ms.end());
      break;
    }
    }
  }

  return 0;
}