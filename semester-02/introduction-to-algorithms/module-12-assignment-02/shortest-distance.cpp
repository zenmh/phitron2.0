#include <bits/stdc++.h>

using namespace std;

long long al[105][105];

void floyd_warshall(int n)
{
  for (int k = 1; k <= n; k++)
  {
    for (int i = 1; i <= n; i++)
    {
      for (int j = 1; j <= n; j++)
      {
        if (al[i][k] != LLONG_MAX && al[k][j] != LLONG_MAX && (al[i][k] + al[k][j]) < al[i][j])
        {
          al[i][j] = al[i][k] + al[k][j];
        }
      }
    }
  }
}

int main()
{
  int n, e;
  cin >> n >> e;

  for (int i = 1; i <= n; i++)
  {
    for (int j = 1; j <= n; j++)
    {
      if (i == j)
      {
        al[i][j] = 0;
      }
      else
      {
        al[i][j] = LLONG_MAX;
      }
    }
  }

  while (e--)
  {
    long long a, b, w;
    cin >> a >> b >> w;
    al[a][b] = min(al[a][b], w);
  }

  floyd_warshall(n);

  int q;
  cin >> q;

  while (q--)
  {
    int x, y;
    cin >> x >> y;

    al[x][y] == LLONG_MAX ? cout << -1 << endl : cout << al[x][y] << endl;
  }

  return 0;
}
