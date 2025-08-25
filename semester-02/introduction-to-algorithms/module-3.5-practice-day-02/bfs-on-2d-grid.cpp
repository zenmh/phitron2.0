#include <bits/stdc++.h>

using namespace std;

char grid[101][101];
int n, m, visited[101][101];
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

  while (!q.empty())
  {
    // Step 01
    pair<int, int> parent = q.front();
    q.pop();

    // Step 02
    cout << parent.first << ' ' << parent.second << endl;

    // Step 03
    for (int i = 0; i < 4; i++)
    {
      int ci = parent.first + movement[i].first,
          cj = parent.second + movement[i].second;
      if (is_valid(ci, cj) && !visited[ci][cj])
      {
        q.push({ci, cj});
        visited[ci][cj]++;
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

  int si, sj;
  cin >> si >> sj;

  memset(visited, 0, sizeof(visited));
  bfs(si, sj);

  return 0;
}
