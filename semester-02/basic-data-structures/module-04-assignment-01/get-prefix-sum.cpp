#include <bits/stdc++.h>

using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n);
  vector<long long> prefix_sum(n);

  cin >> a[0];
  prefix_sum[0] = a[0];

  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
    prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }

  reverse(prefix_sum.begin(), prefix_sum.end());

  for (auto x : prefix_sum)
  {
    cout << x << ' ';
  }

  return 0;
}
