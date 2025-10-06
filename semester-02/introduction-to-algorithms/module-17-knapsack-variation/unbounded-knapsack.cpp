#include <bits/stdc++.h>

using namespace std;

int value[101], weight[101], dp[101][101];

int unbounded_knapsack(int i, int max_weight)
{
  if (i < 0 || max_weight <= 0)
  {
    return 0;
  }

  if (dp[i][max_weight] != -1)
  {
    return dp[i][max_weight];
  }

  if (weight[i] <= max_weight)
  {
    int option1 = unbounded_knapsack(i, max_weight - weight[i]) + value[i];
    int option2 = unbounded_knapsack(i - 1, max_weight);

    dp[i][max_weight] = max(option1, option2);
    return dp[i][max_weight];
  }
  else
  {
    dp[i][max_weight] = unbounded_knapsack(i - 1, max_weight);
    return dp[i][max_weight];
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
    cin >> value[i];
  }

  for (int i = 0; i < n; i++)
  {
    cin >> weight[i];
  }

  int max_weight;
  cin >> max_weight;

  fill(&dp[0][0], &dp[0][0] + 101 * 101, -1);

  cout << unbounded_knapsack(n - 1, max_weight);

  return 0;
}