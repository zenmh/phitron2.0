#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e, q;
  cin >> n >> e >> q;

  long long am[n + 1][n + 1];

  for (int i = 1; i <= n; i++)
  {
    for (int j = 0; j <= n; j++)
    {
      if (i == j)
      {
        am[i][j] = 0;
      }
      else
      {
        am[i][j] = LLONG_MAX;
      }
    }
  }

  while (e--)
  {
    long long a, b, c;
    cin >> a >> b >> c;

    am[a][b] = min(am[a][b], c);
    am[b][a] = min(am[b][a], c);
  }

  for (int k = 1; k <= n; k++)
  {
    for (int j = 1; j <= n; j++)
    {
      for (int i = 1; i <= n; i++)
      {
        if (am[i][k] != LLONG_MAX && am[k][j] != LLONG_MAX && (am[i][k] + am[k][j]) < am[i][j])
        {
          am[i][j] = am[i][k] + am[k][j];
        }
      }
    }
  }

  while (q--)
  {
    int s, d;
    cin >> s >> d;

    am[s][d] == LLONG_MAX ? cout << -1 << endl : cout << am[s][d] << endl;
  }

  return 0;
}
