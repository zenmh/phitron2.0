#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  int adj_mat[n][n];
  memset(adj_mat, 0, sizeof(adj_mat));

  for (int i = 0; i < n; i++)
  {
    adj_mat[i][i]++;
  }

  while (e--)
  {
    int a, b;
    cin >> a >> b;

    adj_mat[a][b]++;
  }

  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < n; j++)
    {
      cout << adj_mat[i][j] << ' ';
    }
    cout << endl;
  }

  return 0;
}
