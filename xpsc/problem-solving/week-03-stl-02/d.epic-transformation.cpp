#include <bits/stdc++.h>

#define nl '\n'
#define fio ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

using namespace std;

int main()
{
  fio;

  int t;
  cin >> t;

  while (t--)
  {
    int n;
    cin >> n;

    map<int, int> mp;

    while (n--)
    {
      int x;
      cin >> x;
      mp[x]++;
    }

    priority_queue<int> pq;

    for (auto [key, val] : mp)
    {
      pq.push(val);
    }

    while (pq.size() > 1)
    {
      int f = pq.top();
      pq.pop();
      int s = pq.top();
      pq.pop();

      if (--f > 0)
      {
        pq.push(f);
      }
      if (--s > 0)
      {
        pq.push(s);
      }
    }

    int sz = 0;

    while (!pq.empty())
    {
      sz += pq.top();
      pq.pop();
    }

    cout << sz << nl;
  }

  return 0;
}