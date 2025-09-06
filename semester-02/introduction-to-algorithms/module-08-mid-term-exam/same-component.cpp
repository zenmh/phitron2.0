#include <bits/stdc++.h>

using namespace std;

char g[1001][1001];
int n, m, v[1001][1001] = {0};
pair<int, int> d[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void dfs(int si, int sj)
{
  v[si][sj]++;

  for (int i = 0; i < 4; i++)
  {
    int ci = si + d[i].first, cj = sj + d[i].second;

    if (is_valid(ci, cj) && !v[ci][cj] && g[ci][cj] == '.')
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
    cin.ignore();
    for (int j = 0; j < m; j++)
    {
      cin >> g[i][j];
    }
  }

  int si, sj, di, dj;
  cin >> si >> sj >> di >> dj;

  dfs(si, sj);

  v[di][dj] ? cout << "YES" : cout << "NO";

  return 0;
}
