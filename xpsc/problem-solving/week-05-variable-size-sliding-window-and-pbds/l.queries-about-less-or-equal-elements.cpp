#include <bits/stdc++.h>
#include <ext/pb_ds/tree_policy.hpp>
#include <ext/pb_ds/assoc_container.hpp>

using namespace std;
using namespace __gnu_pbds;

#define nl '\n'
#define ll long long
#define zenmh ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

template <typename T>
using pbds = tree<T, null_type, less_equal<T>, rb_tree_tag, tree_order_statistics_node_update>;

void run()
{
  int n, m;
  cin >> n >> m;

  pbds<int> a;

  while (n--)
  {
    int x;
    cin >> x;
    a.insert(x);
  }

  while (m--)
  {
    int x;
    cin >> x;
    cout << a.order_of_key(x + 1) << ' ';
  }
}

int main()
{
  zenmh;
  run();
  return 0;
}