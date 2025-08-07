#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  queue<int> q;

  while (n--)
  {
    int x;
    cin >> x;
    q.push(x);
  }

  while (!q.empty())
  {
    cout << q.front() << ' ';
    q.pop();
  }

  return 0;
}
