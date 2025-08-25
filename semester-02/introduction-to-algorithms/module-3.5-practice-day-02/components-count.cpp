#include <bits/stdc++.h>

using namespace std;

int visited[101] = {0};
vector<vector<int>> al(101);

void dfs(int src)
{
  visited[src]++;

  for (int x : al[src])
  {
    if (!visited[x])
    {
      dfs(x);
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

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    if (!visited[i])
    {
      dfs(i);
      cnt++;
    }
  }

  cout << cnt;

  return 0;
}
