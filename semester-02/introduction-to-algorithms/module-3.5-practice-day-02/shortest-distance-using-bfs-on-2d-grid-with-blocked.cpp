#include <bits/stdc++.h>

using namespace std;

char grid[101][101];
int n, m, visited[101][101], dist[101][101];
pair<int, int> movement[4] = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  visited[si][sj]++;
  dist[si][sj] = 0;

  while (!q.empty())
  {
    // Step 01
    pair<int, int> parent = q.front();
    q.pop();

    // Step 02

    // Step 03
    for (int i = 0; i < 4; i++)
    {
      int ci = parent.first + movement[i].first,
          cj = parent.second + movement[i].second;

      if (is_valid(ci, cj) && !visited[ci][cj] && grid[ci][cj] == '.')
      {
        q.push({ci, cj});
        visited[ci][cj]++;
        dist[ci][cj] = dist[parent.first][parent.second] + 1;
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
    }
  }

  memset(visited, 0, sizeof(visited));
  memset(dist, -1, sizeof(dist));

  int si, sj;
  cin >> si >> sj;

  bfs(si, sj);

  int di, dj;
  cin >> di >> dj;

  cout << dist[di][dj];

  return 0;
}
