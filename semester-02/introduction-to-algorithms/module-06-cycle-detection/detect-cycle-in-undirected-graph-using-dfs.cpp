#include <bits/stdc++.h>

using namespace std;

int f = 0;
int v[101] = {0}, parent[101] = {-1};
vector<vector<int>> al(101);

void dfs(int src)
{
  v[src]++;

  for (int c : al[src])
  {
    if (v[c] && parent[src] != c)
    {
      f = 1;
    }
    else if (!v[c])
    {
      parent[c] == src;
      dfs(c);
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
      dfs(i);
    }
  }

  f ? cout << "Cycle Detected" : cout << "No Cycle";

  return 0;
}
