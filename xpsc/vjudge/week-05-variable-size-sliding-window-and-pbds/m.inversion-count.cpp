#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less<T>, rb_tree_tag, tree_order_statistics_node_update>;

void run()
{
  int n;
  cin >> n;

  int a[n];

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  ll cnt = 0;
  pbds<int> p;

  for (int i = n - 1; i >= 0; i--)
  {
    cnt += p.order_of_key(a[i]);
    p.insert(a[i]);
  }

  cout << cnt << nl;
}

int main()
{
  zenmh;

  int t;
  cin >> t;

  while (t--)
  {
    run();
  }

  return 0;
}