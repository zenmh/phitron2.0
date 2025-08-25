#include <bits/stdc++.h>

using namespace std;

int visited[1001] = {0}, level[1001] = {-1};
vector<vector<int>> al(1001);

void bfs(int src)
{
  queue<int> q;
  q.push(src);
  visited[src]++;
  level[src] = 0;

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
        level[c] = level[p] + 1;
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

  cout << level[dst];

  return 0;
}
