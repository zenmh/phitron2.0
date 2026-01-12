#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void run()
{
  int n, k;
  cin >> n >> k;

  int x[n];

  for (int i = 0; i < n; i++)
  {
    cin >> x[i];
  }

  int l = 0, r = 0;
  pbds<pair<int, int>> p;

  while (r < n)
  {
    p.insert({x[r], r});

    if (r - l + 1 == k)
    {
      int idx = k / 2;

      if (k % 2 == 0)
      {
        idx--;
      }

      cout << p.find_by_order(idx)->first << ' ';

      p.erase({x[l], l++});
    }

    r++;
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}