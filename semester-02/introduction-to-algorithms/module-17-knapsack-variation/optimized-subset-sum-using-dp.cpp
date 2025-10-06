#include <bits/stdc++.h>

using namespace std;

int a[101], dp[101][101];

bool subset_sum(int i, int sum) // O(N * SUM)
{
  if (i < 0)
  {
    return sum == 0;
  }

  if (dp[i][sum] != -1)
  {
    return dp[i][sum];
  }

  if (a[i] <= sum)
  {
    bool option1 = subset_sum(i - 1, sum - a[i]);
    bool option2 = subset_sum(i - 1, sum);

    dp[i][sum] = option1 || option2; // it will put 1 for true or 0 for false
    return dp[i][sum];
  }
  else
  {
    dp[i][sum] = subset_sum(i - 1, sum); // it will put 1 for true or 0 for false
    return dp[i][sum];
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

  fill(&dp[0][0], &dp[0][0] + 101 * 101, -1);

  subset_sum(n - 1, sum) ? cout << "Yes" : cout << "No";

  return 0;
}