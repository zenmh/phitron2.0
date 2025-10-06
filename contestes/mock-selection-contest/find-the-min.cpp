#include <bits/stdc++.h>

using namespace std;

int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);

  priority_queue<int, vector<int>, greater<int>> pq;

  int q;
  cin >> q;

  while (q--)
  {
    int a;
    cin >> a;

    if (a == 1)
    {
      int x;
      cin >> x;
      pq.push(x);
    }
    else
    {
      int x = pq.top();

      pq.empty() ? cout << "empty\n" : cout << x << '\n';

      while (x == pq.top())
      {
        pq.pop();
      }
    }
  }

  return 0;
}
