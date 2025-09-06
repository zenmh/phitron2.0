#include <bits/stdc++.h>

using namespace std;

char g[1001][1001];
int n, m, cnt, v[1001][1001] = {0};
pair<int, int> d[4] = {{0, 1}, {0, -1}, {1, 0}, {-1, 0}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void dfs(int si, int sj)
{
  v[si][sj]++;
  cnt++;

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

  int mn = INT_MAX, f = 0;

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      if (!v[i][j] && g[i][j] == '.')
      {
        cnt = 0;
        dfs(i, j);
        mn = min(mn, cnt);
        f = 1;
      }
    }
  }

  f ? cout << mn : cout << -1;

  return 0;
}
