#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  int adj_matrix[n][n];
  memset(adj_matrix, 0, sizeof(adj_matrix));

  for (int i = 0; i < n; i++)
  {
    adj_matrix[i][i]++;
  }

  while (e--)
  {
    int a, b;
    cin >> a >> b;
    adj_matrix[a][b]++;
  }

  int q;
  cin >> q;

  while (q--)
  {
    int a, b;
    cin >> a >> b;

    adj_matrix[a][b] ? cout << "YES" << endl : cout << "NO" << endl;
  }

  return 0;
}
