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
  int n, x;
  cin >> n >> x;

  int p[n];

  for (auto &x : p)
  {
    cin >> x;
  }

  sort(p, p + n);

  int l = 0, r = n - 1, ans = 0;

  while (l <= r)
  {
    if ((ll)p[l] + p[r] <= x)
    {
      l++;
    }

    ans++, r--;
  }

  cout << ans;
}

int main()
{
  zenmh;
  run();
  return 0;
}