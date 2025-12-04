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
  ll n, c;
  cin >> n >> c;

  ll a[n];

  for (ll i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  string s;
  cin >> s;

  ll sum1 = 0, sum2 = 0;

  for (ll i = 0; i < n; i++)
  {
    if (s[i] == '0')
    {
      sum1 += a[i];
    }
    else
    {
      sum2 += a[i];
    }
  }

  ll ans = sum1;

  if (sum1 >= c)
  {
    ans = max(ans, sum1 - c + sum2);
  }

  cout << ans << nl;
}

int main()
{
  zenmh;

  int tc;
  cin >> tc;

  while (tc--)
  {
    run();
  }

  return 0;
}