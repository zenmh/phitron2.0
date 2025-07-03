#include <bits/stdc++.h>
using namespace std;

int main()
{
  int n;
  cin >> n;

  vector<int> a(n), prefix_sum(n), suffix_sum(n);

  cin >> a[0];
  prefix_sum[0] = a[0];

  for (int i = 1; i < n; i++)
  {
    cin >> a[i];
    prefix_sum[i] = prefix_sum[i - 1] + a[i];
  }

  suffix_sum[n - 1] = a[n - 1];
  for (int i = n - 2; i >= 0; i--)
  {
    suffix_sum[i] = suffix_sum[i + 1] + a[i];
  }

  int idx = -1;

  for (int i = 0; i < n; i++)
  {
    int leftSum = prefix_sum[i] - a[i];
    int rightSum = suffix_sum[i] - a[i];

    if (leftSum == rightSum)
    {
      idx = i;
      break;
    }
  }

  cout << idx;

  return 0;
}
