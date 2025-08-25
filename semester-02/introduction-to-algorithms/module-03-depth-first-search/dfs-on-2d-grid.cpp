#include <bits/stdc++.h>

using namespace std;

int n, m;
char grid[101][101];
int visited[101][101];
vector<pair<int, int>> movement = {{-1, 0}, {1, 0}, {0, -1}, {0, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void dfs(int si, int sj)
{
  cout << si << ' ' << sj << endl;
  visited[si][sj]++;

  for (int i = 0; i < 4; i++)
  {
    int ci, cj;
    ci = si + movement[i].first;
    cj = sj + movement[i].second;

    if (is_valid(ci, cj) && !visited[ci][cj])
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

  int si, sj;
  cin >> si >> sj;

  memset(visited, 0, sizeof(visited));
  dfs(si, sj);

  return 0;
}
