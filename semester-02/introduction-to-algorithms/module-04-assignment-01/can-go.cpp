#include <bits/stdc++.h>

using namespace std;

char grid[1001][1001];
int n, m, visited[1001][1001], dist[1001][1001];
pair<int, int> aij, bij, movement[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  visited[si][sj]++;
  dist[si][sj]++;

  while (!q.empty())
  {
    pair<int, int> parent = q.front();
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int ci = parent.first + movement[i].first,
          cj = parent.second + movement[i].second;

      if ((is_valid(ci, cj) && !visited[ci][cj]) && (grid[ci][cj] == '.' || grid[ci][cj] == 'A' || grid[ci][cj] == 'B'))
      {
        q.push({ci, cj});
        visited[ci][cj]++;
        dist[ci][cj]++;
      }
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

      if (grid[i][j] == 'A')
      {
        aij = {i, j};
      }
      else if (grid[i][j] == 'B')
      {
        bij = {i, j};
      }
    }
  }

  memset(visited, 0, sizeof(visited));
  memset(dist, 0, sizeof(dist));

  bfs(aij.first, aij.second);

  dist[bij.first][bij.second] ? cout << "YES" : cout << "NO";

  return 0;
}
