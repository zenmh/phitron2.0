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
int dis[101];

bool cycle(int n)
{
  while (--n) // --n for n-1 times
  {
    for (Edge ed : el)
    {
      int a, b, c;
      a = ed.a;
      b = ed.b;
      c = ed.c;

      if (dis[a] != INT_MAX && (dis[a] + c) < dis[b])
      {
        dis[b] = dis[a] + c;
      }
    }
  }

  for (Edge ed : el)
  {
    int a, b, c;
    a = ed.a;
    b = ed.b;
    c = ed.c;

    if (dis[a] != INT_MAX && (dis[a] + c) < dis[b])
    {
      return true;
    }
  }

  return false;
}

int main()
{
  int n, e;
  cin >> n >> e;

  while (e--)
  {
    int a, b, c;
    cin >> a >> b >> c;
    el.push_back(Edge(a, b, c));
  }

  for (int i = 0; i < n; i++)
  {
    dis[i] = INT_MAX;
  }

  dis[0] = 0; // Maks the source distance 0

  if (cycle(n))
  {
    cout << "Negative Weighted Cycle Detected!";
  }
  else
  {
    for (int i = 0; i < n; i++)
    {
      cout << "Distance of " << i << " --> " << dis[i] << endl;
    }
  }

  return 0;
}
