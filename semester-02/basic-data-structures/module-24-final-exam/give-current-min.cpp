#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  priority_queue<int, vector<int>, greater<int>> pq;

  while (n--)
  {
    int x;
    cin >> x;
    pq.push(x);
  }

  int q;
  cin >> q;

  while (q--)
  {
    int o;
    cin >> o;

    if (o == 0)
    {
      int x;
      cin >> x;
      pq.push(x);
      cout << pq.top();
    }
    else if (o == 1)
    {
      pq.empty() ? cout << "Empty" : cout << pq.top();
    }
    else
    {
      if (!pq.empty())
      {
        pq.pop();
      }

      pq.empty() ? cout << "Empty" : cout << pq.top();
    }
    cout << endl;
  }

  return 0;
}
