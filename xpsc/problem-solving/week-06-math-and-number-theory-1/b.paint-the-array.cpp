/* ------------------------------------------------------------
Hi there, I'm here.
Mehedi Hasan (zenmh), Bangladesh.
LinkedIn & CP: zenmh
------------------------------------------------------------ */

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

  ll a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll gcd1 = 0, gcd2 = 0;

  for (int i = 0; i < n; i++)
  {
    if (i % 2 == 0)
    {
      gcd1 = gcd(gcd1, a[i]);
    }
    else
    {
      gcd2 = gcd(gcd2, a[i]);
    }
  }

  int flag = 1;

  for (int i = 0; i < n; i += 2)
  {
    if (a[i] % gcd2 == 0)
    {
      flag = 0;
    }
  }

  if (flag)
  {
    cout << gcd2 << nl;
    return;
  }

  flag = 1;

  for (int i = 1; i < n; i += 2)
  {
    if (a[i] % gcd1 == 0)
    {
      flag = 0;
    }
  }

  if (flag)
  {
    cout << gcd1 << nl;
    return;
  }

  cout << 0 << nl;
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