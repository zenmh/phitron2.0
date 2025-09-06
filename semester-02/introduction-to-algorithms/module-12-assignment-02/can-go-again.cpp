#include <bits/stdc++.h>

using namespace std;

class Edge
{
public:
  int a, b, c;

  Edge(int a, int b, int c)
  {
    this->a = a;
    this->b = b;
    this->c = c;
  }
};

vector<Edge> el;
long long dis[1001];
int cycle = 0;

void bellman_ford(int n)
{
  while (--n)
  {
    for (Edge ed : el)
    {
      if (dis[ed.a] != LLONG_MAX && (dis[ed.a] + ed.c) < dis[ed.b])
      {
        dis[ed.b] = dis[ed.a] + ed.c;
      }
    }
  }

  for (Edge ed : el)
  {
    if (dis[ed.a] != LLONG_MAX && (dis[ed.a] + ed.c) < dis[ed.b])
    {
      cycle = 1;
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  while (e--)
  {
    int a, b, w;
    cin >> a >> b >> w;
    el.push_back(Edge(a, b, w));
  }

  fill(dis, dis + 1001, LLONG_MAX);

  int s, t;
  cin >> s >> t;

  dis[s] = 0;

  bellman_ford(n);

  if (cycle)
  {
    cout << "Negative Cycle Detected";
    return 0;
  }

  while (t--)
  {
    int d;
    cin >> d;

    dis[d] == LLONG_MAX ? cout << "Not Possible\n" : cout << dis[d] << endl;
  }

  return 0;
}
