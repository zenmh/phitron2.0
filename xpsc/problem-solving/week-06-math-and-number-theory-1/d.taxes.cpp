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

bool prime(ll n)
{
  if (n < 2)
  {
    return false;
  }

  if (n % 2 == 0)
  {
    return n == 2;
  }

  if (n % 3 == 0)
  {
    return n == 3;
  }

  for (ll i = 5; i * i <= n; i += 6)
  {
    if (n % i == 0 || n % (i + 2) == 0)
    {
      return false;
    }
  }

  return true;
}

void run()
{
  ll n;
  cin >> n;

  if (prime(n))
  {
    cout << 1;
  }
  else if (n % 2 == 0)
  {
    cout << 2;
  }
  else
  {
    if (prime(n - 2))
    {
      cout << 2;
    }
    else
    {
      cout << 3;
    }
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}