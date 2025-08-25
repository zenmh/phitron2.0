#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> al(1001);
vector<int> visited(1001, 0);

void take_input_adj_list()
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
}

void dfs(int src)
{
  cout << src << ' ';
  visited[src]++;

  for (int child : al[src])
  {
    if (!visited[child])
    {
      dfs(child);
    }
  }
}

int main()
{
  take_input_adj_list();
  dfs(0);

  return 0;
}
