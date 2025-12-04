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
  ll n, k;
  cin >> n >> k;

  vector<ll> divisors;

  for (ll i = 1; i * i <= n; i++)
  {
    if (n % i)
    {
      continue;
    }

    divisors.push_back(i);

    if (n / i != i)
    {
      divisors.push_back(n / i);
    }
  }

  if ((ll)divisors.size() < k)
  {
    cout << -1;
    return;
  }

  sort(all(divisors));

  cout << divisors.at(k - 1);
}

int main()
{
  zenmh;
  run();
  return 0;
}