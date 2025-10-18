#include <bits/stdc++.h>

#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  deque<int> dq;

  while (n--)
  {
    int x;
    cin >> x;
    dq.push_back(x);
  }

  int sereja = 0, dima = 0;
  bool sf = true, df = false;

  while (!dq.empty())
  {
    if (sf)
    {
      if (dq.back() > dq.front())
      {
        sereja += dq.back();
        dq.pop_back();
      }
      else
      {
        sereja += dq.front();
        dq.pop_front();
      }
    }
    else
    {
      if (dq.back() > dq.front())
      {
        dima += dq.back();
        dq.pop_back();
      }
      else
      {
        dima += dq.front();
        dq.pop_front();
      }
    }

    sf = !sf;
    df = !df;
  }

  cout << sereja << ' ' << dima;

  return 0;
}