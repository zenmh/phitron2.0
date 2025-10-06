#include <bits/stdc++.h>

using namespace std;

int a[101];

bool subset_sum(int i, int sum) // O(N^2) really bad!
{
  if (i < 0)
  {
    return sum == 0;
  }

  if (a[i] <= sum)
  {
    bool option1 = subset_sum(i - 1, sum - a[i]);
    bool option2 = subset_sum(i - 1, sum);

    return option1 || option2;
  }
  else
  {
    return subset_sum(i - 1, sum);
  }
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(nullptr);

  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> a[i];
  }

  int sum;
  cin >> sum;

  subset_sum(n - 1, sum) ? cout << "Yes" : cout << "No";

  return 0;
}