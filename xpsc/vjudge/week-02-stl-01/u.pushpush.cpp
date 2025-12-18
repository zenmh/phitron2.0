#include <bits/stdc++.h>

#define nl '\n'
#define fastio() ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fastio();

  int n;
  cin >> n;

  deque<int> dq;

  bool flag = false;

  if (n % 2)
  {
    flag = true;
  }

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;

    if (flag)
    {
      dq.push_front(x);
    }
    else
    {
      dq.push_back(x);
    }

    flag = !flag;
  }

  for (int x : dq)
  {
    cout << x << ' ';
  }

  return 0;
}