#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  vector<vector<int>> v(n);

  while (e--)
  {
    int a, b;
    cin >> a >> b;

    v[a].push_back(b);
    v[b].push_back(a);
  }

  for (vector<int> x : v)
  {
    for (int y : x)
    {
      cout << y << ' ';
    }

    cout << endl;
  }

  return 0;
}
