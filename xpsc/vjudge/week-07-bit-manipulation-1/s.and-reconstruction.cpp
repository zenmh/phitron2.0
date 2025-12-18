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

  int b[n - 1];

  for (int i = 0; i < n - 1; i++)
  {
    cin >> b[i];
  }

  int a[n];
  a[0] = b[0], a[n - 1] = b[n - 2];

  for (int i = 1; i < n - 1; i++)
  {
    a[i] = (b[i - 1] | b[i]);
  }

  for (int i = 0; i < n - 1; i++)
  {
    if (b[i] != (a[i] & a[i + 1]))
    {
      cout << -1 << nl;
      return;
    }
  }

  for (int x : a)
  {
    cout << x << ' ';
  }

  cout << nl;
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