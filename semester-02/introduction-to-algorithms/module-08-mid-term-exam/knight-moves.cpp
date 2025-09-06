#include <bits/stdc++.h>

using namespace std;

int n, m, v[101][101], dis[101][101];
pair<int, int> d[8] = {{-2, -1}, {-1, -2}, {1, -2}, {2, -1}, {-2, 1}, {-1, 2}, {1, 2}, {2, 1}};

bool is_valid(int i, int j)
{
  return (i >= 0 && i < n) && (j >= 0 && j < m);
}

void bfs(int si, int sj)
{
  queue<pair<int, int>> q;
  q.push({si, sj});
  v[si][sj]++;
  dis[si][sj] = 0;

  while (!q.empty())
  {
    pair<int, int> p = q.front();
    int pi = p.first, pj = p.second;
    q.pop();

    for (int i = 0; i < 8; i++)
    {
      int ci = pi + d[i].first, cj = pj + d[i].second;

      if (is_valid(ci, cj) && !v[ci][cj])
      {
        q.push({ci, cj});
        v[ci][cj]++;
        dis[ci][cj] = dis[pi][pj] + 1;
      }
    }
  }
}

int main()
{
  int tc;
  cin >> tc;

  while (tc--)
  {
    int ki, kj, qi, qj;
    cin >> n >> m >> ki >> kj >> qi >> qj;

    memset(v, 0, sizeof(v));
    memset(dis, -1, sizeof(dis));

    bfs(ki, kj);

    cout << dis[qi][qj] << endl;
  }

  return 0;
}
