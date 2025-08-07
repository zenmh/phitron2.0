#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> v(n);

  for (int i = 0; i < n; i++)
  {
    cin >> v[i];
  }

  int x;
  cin >> x;

  v.push_back(x);

  int cur_idx = v.size() - 1;

  while (cur_idx)
  {
    int par_idx = (cur_idx - 1) / 2;

    if (v[par_idx] > v[cur_idx])
    {
      swap(v[par_idx], v[cur_idx]);
    }
    else
    {
      break;
    }

    cur_idx = par_idx;
  }

  for (int y : v)
  {
    cout << y << ' ';
  }

  return 0;
}
