#include <bits/stdc++.h>

using namespace std;

char grid[1001][1001];
int n, m, cnt, visited[1001][1001];
pair<int, int> movement[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void dfs(int si, int sj)
{
  visited[si][sj] = 1;
  cnt++;

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

  vector<int> ans;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (grid[i][j] == '.' && !visited[i][j])
      {
        cnt = 0;
        dfs(i, j);
        ans.push_back(cnt);
      }
    }
  }

  if (ans.size())
  {
    sort(ans.begin(), ans.end());

    for (int x : ans)
    {
      cout << x << ' ';
    }
  }
  else
  {
    cout << 0;
  }

  return 0;
}
