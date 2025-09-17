#include <bits/stdc++.h>

using namespace std;

int value[101], weight[101], dp[101][101];

int knapsack(int i, int max_weight) // O(V * W)
{
  if (i < 0 || max_weight <= 0) // base case
  {
    return 0;
  }

  if (dp[i][max_weight] != -1) // memoization or dp logic
  {
    return dp[i][max_weight];
  }

  if (weight[i] <= max_weight) // if have option to pick or not
  {
    int option1 = knapsack(i - 1, max_weight - weight[i]) + value[i];
    int option2 = knapsack(i - 1, max_weight);

    dp[i][max_weight] = max(option1, option2);
    return dp[i][max_weight];
  }
  else // if only one option to avoid
  {
    dp[i][max_weight] = knapsack(i - 1, max_weight);
    return dp[i][max_weight];
  }
}

int main()
{
  int n;
  cin >> n;

  for (int i = 0; i < n; i++)
  {
    cin >> value[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }

  int max_weight;
  cin >> max_weight;

  fill(&dp[0][0], &dp[0][0] + 101 * 101, -1);

  cout << knapsack(n - 1, max_weight);

  return 0;
}