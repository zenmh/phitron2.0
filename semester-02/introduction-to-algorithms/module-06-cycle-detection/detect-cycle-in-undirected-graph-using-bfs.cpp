#include <bits/stdc++.h>

using namespace std;

int f = 0;
int v[101] = {0}, parent[101] = {-1};
vector<vector<int>> al(101);

void bfs(int src)
{
  queue<int> q;
  q.push(src);
  v[src]++;

  while (!q.empty())
  {
    int p = q.front();
    q.pop();

    for (int c : al[p])
    {
      if (v[c] && parent[p] != c)
      {
        f++;
      }
      else if (!v[c])
      {
        q.push(c);
        v[c]++;
        parent[c] = p;
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
    int a, b;
    cin >> a >> b;
    al[a].push_back(b);
    al[b].push_back(a);
  }

  for (int i = 0; i < 101; i++)
  {
    if (!v[i])
    {
      bfs(i);
    }
  }

  f ? cout << "Cycle Detected" : cout << "No Cycle";

  return 0;
}
