#include <bits/stdc++.h>

using namespace std;

char g[1001][1001];
int n, m, di, dj, v[1001][1001];
pair<int, int> d[4] = {{0, 1}, {0, -1}, {-1, 0}, {1, 0}};
pair<int, int> parent[1001][1001];

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

bool bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  v[si][sj]++;
  parent[si][sj] = {-1, -1};

  while (!q.empty())
  {
    pair<int, int> p = q.front();
    int pi = p.first, pj = p.second;
    q.pop();

    for (int i = 0; i < 4; i++)
    {
      int ci = pi + d[i].first, cj = pj + d[i].second;

      if (is_valid(ci, cj) && !v[ci][cj] && g[ci][cj] != '#')
      {
        v[ci][cj]++;
        q.push({ci, cj});
        parent[ci][cj] = {pi, pj};

        if (ci == di && cj == dj)
        {
          return true;
        }
      }
    }
  }

  return false;
}

int main()
{
  cin >> n >> m;

  int ri, rj;

  for (int i = 0; i < n; i++)
  {
    cin.ignore();
    for (int j = 0; j < m; j++)
    {
      cin >> g[i][j];

      if (g[i][j] == 'R')
      {
        ri = i;
        rj = j;
      }
      else if (g[i][j] == 'D')
      {
        di = i;
        dj = j;
      }
    }
  }

  memset(v, 0, sizeof(v));

  if (bfs(ri, rj))
  {
    int i = di, j = dj;

    while (!(i == ri && j == rj))
    {
      pair<int, int> p = parent[i][j];
      int pi = p.first, pj = p.second;

      if (!(pi == ri && pj == rj))
      {
        g[pi][pj] = 'X';
      }

      i = pi, j = pj;
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < m; j++)
    {
      cout << g[i][j];
    }
    cout << endl;
  }

  return 0;
}
