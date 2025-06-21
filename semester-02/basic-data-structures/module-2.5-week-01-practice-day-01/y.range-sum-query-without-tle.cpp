#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n, q;
  cin >> n >> q;

  vector<int> a(n);
  vector<long long> prefix_sum(n);

  cin >> a[0];
  prefix_sum[0] = a[0];

  for (int i = 1; i < n; i++)
  {
    cin >> a[i];

    prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }

  while (q--)
  {
    int l, r;
    cin >> l >> r;

    l--;
    r--;

    if (l)
    {
      cout << prefix_sum[r] - prefix_sum[--l] << endl;
    }
    else
    {
      cout << prefix_sum[r] << endl;
    }
  }

  return 0;
}
