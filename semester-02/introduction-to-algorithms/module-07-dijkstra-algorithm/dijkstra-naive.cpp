#include <bits/stdc++.h>

using namespace std;

vector<vector<pair<int, int>>> al(101);
int dis[101] = {INT_MAX};

void dijkstra(int src)
{
  queue<pair<int, int>> q;
  q.push({src, 0});
  dis[src] = 0;

  while (!q.empty())
  {
    pair<int, int> p = q.front();
    q.pop();

    int pn = p.first, pd = p.second;

    for (pair<int, int> c : al[pn])
    {
      int cn = c.first, cd = c.second;

      if ((pd + cd) < dis[cn])
      {
        dis[cn] = pd + cd;
        q.push({cn, dis[cn]});
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
