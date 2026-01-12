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

bool check_k_th_bit_on_or_off(int n, int k)
{
  return ((n >> k) & 1);
}

void print_on_and_off_bits(int n)
{
  for (int k = 7; k >= 0; k--)
  {
    cout << check_k_th_bit_on_or_off(n, k) << ' ';
  }
}

void run()
{
  print_on_and_off_bits(45); // 0 0 1 0 1 1 0 1
}

int main()
{
  zenmh;
  run();
  return 0;
}