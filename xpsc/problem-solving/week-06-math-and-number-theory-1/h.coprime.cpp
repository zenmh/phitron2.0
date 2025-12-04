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

  vector<int> last_index(1001, -1);

  for (int i = 1; i <= n; i++)
  {
    int x;
    cin >> x;
    last_index[x] = i;
  }

  int ans = -1;

  for (int i = 1; i <= 1000; i++)
  {
    if (last_index[i] == -1)
    {
      continue;
    }

    for (int j = 1; j <= 1000; j++)
    {
      if (last_index[j] == -1)
      {
        continue;
      }

      if (gcd(i, j) == 1)
      {
        ans = max(ans, last_index[i] + last_index[j]);
      }
    }
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