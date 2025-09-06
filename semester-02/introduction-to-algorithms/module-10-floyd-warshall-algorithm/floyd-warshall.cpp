#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  int am[n][n];

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      if (i == j)
      {
        am[i][j] = 0;
      }
      else
      {
        am[i][j] = INT_MAX;
      }
    }
  }

  while (e--)
  {
    int a, b, c;
    cin >> a >> b >> c;

    am[a][b] = c;
  }

  for (int k = 0; k < n; k++)
  {
    for (int i = 0; i < n; i++)
    {
      for (int j = 0; j < n; j++)
      {
        if (am[i][k] != INT_MAX && am[k][j] != INT_MAX && (am[i][k] + am[k][j]) < am[i][j])
        {
          am[i][j] = am[i][k] + am[k][j];
        }
      }
    }
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      am[i][j] == INT_MAX ? cout << "- " : cout << am[i][j] << ' ';
    }

    cout << endl;
  }

  return 0;
}
