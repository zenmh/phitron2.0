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
  int n, k;
  cin >> n >> k;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  while (k--)
  {
    int q;
    cin >> q;

    int l = 0, r = n - 1, mid = r / 2, flag = 0;

    while (l <= r)
    {
      if (q < a[mid])
      {
        r = mid - 1;
      }
      else if (q > a[mid])
      {
        l = mid + 1;
      }
      else
      {
        flag = 1;
        break;
      }

      mid = (l + r) / 2;
    }

    flag ? cout << "YES\n" : cout << "NO\n";
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}