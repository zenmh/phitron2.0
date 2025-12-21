/* ---------------------------------------------------------
Hi there, I'm here.
Btw, I'm Mehedi Hasan from Bangladesh. Let's get connected.
LinkedIn & CP: zenmh
--------------------------------------------------------- */

#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define ld long double
#define all(x) x.begin(), x.end()
#define rall(x) x.rbegin(), x.rend()
#define zenmh ios::sync_with_stdio(false), cin.tie(nullptr)
#define ordered_set tree<ll, null_type, less<ll>, rb_tree_tag, tree_order_statistics_node_update>
/*
- find_by_order(k): iterator to k-th element (0-indexed)
- order_of_key(x): count of elements strictly less than x
*/

void run()
{
  int n, m;
  cin >> n >> m;

  set<int> s;
  vector<int> pos(n + 2, INT_MAX), arr(n + 1);

  for (int i = 1; i <= n; i++)
  {
    cin >> arr[i];

    if (pos[arr[i] - 1] > i)
    {
      s.insert(arr[i]);
    }

    pos[arr[i]] = i;
  }

  while (m--)
  {
    int a, b;
    cin >> a >> b;

    if (pos[arr[a]] < pos[arr[a] - 1])
    {
      s.erase(arr[a]);
    }

    if (pos[arr[a] + 1] < pos[arr[a]])
    {
      s.erase(arr[a] + 1);
    }

    if (pos[arr[b]] < pos[arr[b] - 1])
    {
      s.erase(arr[b]);
    }

    if (pos[arr[b] + 1] < pos[arr[b]])
    {
      s.erase(arr[b] + 1);
    }

    swap(arr[a], arr[b]), swap(pos[arr[a]], pos[arr[b]]);

    if (pos[arr[a]] < pos[arr[a] - 1])
    {
      s.insert(arr[a]);
    }

    if (pos[arr[a] + 1] < pos[arr[a]])
    {
      s.insert(arr[a] + 1);
    }

    if (pos[arr[b]] < pos[arr[b] - 1])
    {
      s.insert(arr[b]);
    }

    if (pos[arr[b] + 1] < pos[arr[b]])
    {
      s.insert(arr[b] + 1);
    }

    cout << s.size() << nl;
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}