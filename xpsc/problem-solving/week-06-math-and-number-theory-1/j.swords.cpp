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
#define all(x) x.begin(), x.end()
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define ordered_multiset tree<int, null_type, less_equal<int>, rb_tree_tag, tree_order_statistics_node_update>
/*
auto it = os.find_by_order(x) -> index (0 based)
int value = os.order_of_key(x) -> count of less than x
*/

void run()
{
  int n;
  cin >> n;

  ll a[n], mx = LLONG_MIN;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
    mx = max(mx, a[i]);
  }

  ll cnt = 0, g = 0;

  for (int i = 0; i < n; i++)
  {
    cnt += mx - a[i];
    g = gcd(g, mx - a[i]);
  }

  cout << cnt / g << ' ' << g;
}

int main()
{
  zenmh;
  run();
  return 0;
}