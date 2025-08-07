#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, m;
  cin >> n >> m;

  if (n != m)
  {
    cout << "NO";
    return 0;
  }

  stack<int> s;

  while (n--)
  {
    int x;
    cin >> x;
    s.push(x);
  }

  queue<int> q;

  while (m--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  while (!s.empty())
  {
    if (s.top() != q.front())
    {
      cout << "NO";
      return 0;
    }
    s.pop();
    q.pop();
  }

  cout << "YES";

  return 0;
}
