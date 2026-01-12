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

    deque<int> d;

    int x;
    cin >> x;
    d.push_back(x);

    for (int i = 1; i < n; i++)
    {
      int y;
      cin >> y;

      if (y < d.front())
      {
        d.push_front(y);
      }
      else
      {
        d.push_back(y);
      }
    }

    for (int y : d)
    {
      cout << y << ' ';
    }

    cout << nl;
  }

  return 0;
}