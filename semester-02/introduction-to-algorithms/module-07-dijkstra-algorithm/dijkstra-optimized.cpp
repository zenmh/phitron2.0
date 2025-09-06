#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> al(101);
int dis[101] = {INT_MAX};

void dijkstra(int src)
{
  priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
  pq.push({0, src});
  dis[src] = 0;

  while (!pq.empty())
  {
    pair<int, int> p = pq.top();
    pq.pop();

    int pd = p.first, pn = p.second;

    for (pair<int, int> c : al[pn])
    {
      int cn = c.first, cd = c.second;

      if ((pd + cd) < dis[cn])
      {
        dis[cn] = pd + cd;
        pq.push({dis[cn], cn});
      }
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  while (e--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    al[a].push_back({b, c});
    al[b].push_back({a, c});
  }

  for (int i = 0; i < 101; i++)
  {
    dis[i] = INT_MAX;
  }

  dijkstra(0);

  for (int i = 0; i < n; i++)
  {
    cout << "i = " << i << " --> " << "d = " << dis[i] << endl;
  }

  return 0;
}
