#include <bits/stdc++.h>

using namespace std;

int visited[1001] = {0}, parent[1001] = {-1};
vector<vector<int>> al(1001);

void bfs(int src)
{
  queue<int> q;
  q.push(src);
  visited[src]++;

  while (!q.empty())
  {
    // Step 01
    int p = q.front();
    q.pop();

    // Step 02

    // Step 03
    for (int c : al[p])
    {
      if (!visited[c])
      {
        q.push(c);
        visited[c]++;
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

  int src, dst;
  cin >> src >> dst;

  bfs(src);

  int node = dst;
  vector<int> path;

  while (node != -1)
  {
    path.push_back(node);
    node = parent[node];
  }

  reverse(path.begin(), path.end());

  for (int x : path)
  {
    cout << x << ' ';
  }

  return 0;
}
