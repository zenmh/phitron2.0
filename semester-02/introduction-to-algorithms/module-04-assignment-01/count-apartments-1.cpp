#include <bits/stdc++.h>

using namespace std;

char grid[1001][1001];
int n, m, visited[1001][1001];
pair<int, int> movement[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void dfs(int si, int sj)
{
  visited[si][sj] = 1;

  for (int i = 0; i < 4; i++)
  {
    int ci = si + movement[i].first,
        cj = sj + movement[i].second;

    if (is_valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
    {
      dfs(ci, cj);
    }
  }
}

int main()
{
  cin >> n >> m;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cin >> grid[i][j];
    }
  }

  memset(visited, 0, sizeof(visited));

  int cnt = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (grid[i][j] == '.' && !visited[i][j])
      {
        dfs(i, j);
        cnt++;
      }
    }
  }

  cout << cnt;

  return 0;
}
