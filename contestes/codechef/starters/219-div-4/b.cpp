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
  int a, b;
  cin >> a >> b;
  double x = (a * 1.0) / 100, y = (b * 1.0) / 225;

  if (x < y)
  {
    cout << "Small\n";
  }
  else if (x > y)
  {
    cout << "Large\n";
  }
  else
  {
    cout << "Equal\n";
  }
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