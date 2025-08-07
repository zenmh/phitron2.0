#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  stack<int> s;

  for (int i = 0; i < n; i++)
  {
    int x;
    cin >> x;
    s.push(x);
  }

  int m;
  cin >> m;

  if (n != m)
  {
    cout << "NO";
    return 0;
  }

  queue<int> q;

  for (int i = 0; i < n; i++)
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
