#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, e;
  cin >> n >> e;

  vector<vector<int>> al(n);

  while (e--)
  {
    int a, b;
    cin >> a >> b;
    al[a].push_back(b);
    al[b].push_back(a);
  }

  int q;
  cin >> q;

  while (q--)
  {
    int x;
    cin >> x;

    vector<int> v = al[x];

    if (v.size())
    {
      sort(v.begin(), v.end(), greater<int>());

      for (int y : v)
      {
        cout << y << ' ';
      }
    }
    else
    {
      cout << -1;
    }

    cout << endl;
  }

  return 0;
}
