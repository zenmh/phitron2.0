#include <bits/stdc++.h>

using namespace std;

bool cycle = false;
int v[101] = {0}, path_visited[101] = {0};
vector<vector<int>> al(101);

void dfs(int src)
{
  v[src] = 1;
  path_visited[src] = 1;

  for (int c : al[src])
  {
    if (v[c] && path_visited[c])
    {
      cycle = true;
    }
    else if (!v[c])
    {
      dfs(c);
    }
  }

  path_visited[src] = 0;
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
  }

  for (int i = 0; i < 101; i++)
  {
    if (!v[i])
    {
      dfs(i);
    }
  }

  cycle ? cout << "Cycle Detected" : cout << "No Cycle";

  return 0;
}
