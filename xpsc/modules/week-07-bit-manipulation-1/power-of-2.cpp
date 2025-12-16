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
  cout << (1 << 0) << nl;  // 1
  cout << (1 << 1) << nl;  // 2
  cout << (1 << 2) << nl;  // 4
  cout << (1 << 3) << nl;  // 8
  cout << (1 << 4) << nl;  // 16
  cout << (1 << 5) << nl;  // 32
  cout << (1 << 6) << nl;  // 64
  cout << (1 << 7) << nl;  // 128
  cout << (1 << 8) << nl;  // 256
  cout << (1 << 9) << nl;  // 512
  cout << (1 << 10) << nl; // 1024
}

int main()
{
  zenmh;
  run();
  return 0;
}